#include "List.h"

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;

void List::Add(int item)
{
	Node* nuevo_nodo = new Node();
	nuevo_nodo->data = item;
	nuevo_nodo->next = nullptr;

	Node* aux = header;

	if (header == nullptr) {
		header = nuevo_nodo;
	}
	else {
		while (aux->next != nullptr) {
			aux = aux->next;
		}
		aux->next = nuevo_nodo;
	}
	node.index++;
}

void List::Clear()
{
	int num;
	while (header != nullptr)
	{
		if (header != nullptr) {
			Node* aux = nullptr;
			header = aux;
		}
		MessageBox::Show("Se eliminaron los elementos");
	}

}

int List::Count()
{
	int cont = 0;
	Node* nuevo_nodo = header;

	while (nuevo_nodo != nullptr)
	{
		nuevo_nodo = nuevo_nodo->next;
		cont++;
	}

	return cont;
}

bool List::Contains(int item)
{
	
	Node* nuevo_nodo = header;
	bool estado = false;
	while (nuevo_nodo != nullptr) 
	{
		if (nuevo_nodo->data == item) {
			estado = true;
		}
		nuevo_nodo = nuevo_nodo->next;
	}
	return estado;
}

int List::IndexOf(int item)
{
	int posicion = -1;
	Node* nuevo_nodo = header;

	int indice = 0;
	while (nuevo_nodo != nullptr && posicion != item)
	{
		if (nuevo_nodo->data == item) {
			return indice;
		}
		nuevo_nodo = nuevo_nodo->next;
		indice++;
	}
	return -1;
}


void List::Insert(int index, int item)
{
	
	Node* nuevo_nodo = new Node();

	nuevo_nodo->data = item;
	nuevo_nodo->next = nullptr;

	Node* aux = header;

	int i = 0;

	if (index == 0) {
		if (header == nullptr) {
			header = nuevo_nodo;	
		}
		else {
			header = nuevo_nodo;	
			nuevo_nodo->next = aux;
		}
	}
	else {
		while (aux->next != nullptr && i != index - 1)
		{
			aux = aux->next;
			i++;
		}
		nuevo_nodo->next = aux->next;
		aux->next = nuevo_nodo;
	}
	MessageBox::Show("Se agregó el elemento " + item + " en la posición " + i);
}


int List::GetItem(int index)
{
	Node* nuevo_nodo = header; 

	int cont = 0;

	while (nuevo_nodo != nullptr)
	{
		if (cont == index) {
			return nuevo_nodo->data;
		}
		cont++;
		nuevo_nodo = nuevo_nodo->next; 

	}
}


int List::LastIndexOF(int item)
{
	int posicion = -1; 
	int indice = 0;

	Node* nuevo_nodo = header;


	if (header != nullptr)
	{
		while (nuevo_nodo != nullptr)
		{
			if (nuevo_nodo->data == item) {
				posicion = indice;
			}
			nuevo_nodo = nuevo_nodo->next;
			indice++;
		}

		if ((indice > 0) && (nuevo_nodo == nullptr) && (posicion != -1))
		{
			return posicion;
		}
		else
		{
			return posicion;
		}
	}
	else
	{
		return posicion;
	}
}

bool List::Remove(int item)
{

	int posicion = -1;
	Node* nuevo_nodo = header;

	int i = 0;
	int final = 0;

	while (nuevo_nodo != nullptr && posicion != item || final == 99)
	{
		if (nuevo_nodo->data == item) {
			posicion = i;
			final == 99;
		}
		nuevo_nodo = nuevo_nodo->next;
		i++;
	}

	if (posicion == -1) {
		return false;
	}
	else {
		Node* aux;
		Node* anterior = nullptr;

		aux = header;

		while (aux != nullptr && aux->data != item)
		{
			anterior = aux;
			aux = aux->next;
		}
		if (anterior == nullptr) {
			header = header->next;
			delete(aux);
			return true;
		}
		else {
			anterior->next = aux->next;
			delete(aux);
			return true;
		}
	}
}

void List::RemoveAt(int index)
{
	Node* aux;
	Node* anterior = nullptr;

	aux = header;

	int indice = 0;
	while (aux != nullptr && indice != index)
	{
		anterior = aux;
		aux = aux->next;
		indice++;
	}
	if (anterior == nullptr) {
		header = header->next;
		delete(aux);
	}
	else {
		anterior->next = aux->next;
		delete(aux);
	}
	MessageBox::Show("Se eliminó el elemento de la posición " + index + " correctamente");
}

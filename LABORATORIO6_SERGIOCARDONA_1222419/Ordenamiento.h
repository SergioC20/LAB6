#pragma once
#include <string.h>
#include <string>


class Ordenamiento
{
public:

	
	void InicializarDatos(std::string nombres[], int generacion[], int numero[], int cantidad);

	std::string InicializarNombres(int n);

	int InicializarGeneracion(int n);

	int InicializarNumero(int n);

	int InicializarCantidad();

	void SelectionSort_NN();

	void ShellSort_NN();

	void QuickSort_NN();
	void quick(int* numero, int start, int end);
	int divide(int* numero, int start, int end);

	void SelectionSort_Generacion();

	void ShellSort_Generacion();

	void QuickSort_Generacion();
	void quick_Generacion(int* numero, int start, int end);
	int divide_Generacion(int* numero, int start, int end);
};


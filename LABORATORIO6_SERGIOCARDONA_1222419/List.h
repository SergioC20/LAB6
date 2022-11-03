#pragma once
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>

using namespace std;


class List
{
	struct Node
	{
		int data;
		string nombre;
		int index;

		Node* next;
	}node;

private:

	Node* header = nullptr;


public:

	void Add(int item);

	void Clear();

	int Count();

	bool Contains(int item);

	int IndexOf(int item);

	void Insert(int index, int item);

	int GetItem(int index);

	int LastIndexOF(int item);

	bool Remove(int item);

	void RemoveAt(int index);
};


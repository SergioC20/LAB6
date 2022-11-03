#include "Ordenamiento.h"
int Numero[500];
int Generacion[500];
std::string Nombre[500];
int cantidad;

void Ordenamiento::InicializarDatos(std::string nombres[], int generacion[], int numero[], int n) {

	cantidad = n;
	for (int i = 0; i < cantidad; i++) {
		Numero[i] = numero[i];
		Generacion[i] = generacion[i];
		Nombre[i] = nombres[i];
	}

}

std::string Ordenamiento::InicializarNombres(int x) {
	return Nombre[x];
}

int Ordenamiento::InicializarGeneracion(int x) {
	return Generacion[x];
}

int Ordenamiento::InicializarNumero(int x) {
	return Numero[x];
}

int Ordenamiento::InicializarCantidad() {
	return cantidad;
}

void Ordenamiento::SelectionSort_NN() {

	int i, j, min_indx;

	for (i = 0; i < cantidad - 1; i++) {

		min_indx = i;
		for (j = i + 1; j < cantidad; j++) {

			if (Numero[j] < Numero[min_indx]) {
				min_indx = j;
			}
		}
		int temp = Numero[min_indx];
		Numero[min_indx] = Numero[i];
		Numero[i] = temp;

		std::string temp1 = Nombre[min_indx];
		Nombre[min_indx] = Nombre[i];
		Nombre[i] = temp1;

		int temp2 = Generacion[min_indx];
		Generacion[min_indx] = Generacion[i];
		Generacion[i] = temp2;
	}
}

void Ordenamiento::ShellSort_NN() {

	int i, j, k;
	int intervalo = cantidad / 2;
	double temp;

	while (intervalo > 0) {

		for (i = intervalo; i < cantidad; i++) {

			j = i - intervalo;

			while (j >= 0) {

				k = j + intervalo;

				if (Numero[j] <= Numero[k]) {
					j = -1;
				}
				else {
					int temp = Numero[j];
					Numero[j] = Numero[k];
					Numero[k] = temp;

					std::string temp1 = Nombre[j];
					Nombre[j] = Nombre[k];
					Nombre[k] = temp1;

					int temp2 = Generacion[j];
					Generacion[j] = Generacion[k];
					Generacion[k] = temp2;

					j -= intervalo;
				}
			}
		}
		intervalo = intervalo / 2;
	}

}

void Ordenamiento::QuickSort_NN() {

	quick(Numero, 0, cantidad - 1);
}
void Ordenamiento::quick(int* numero, int start, int end) {
	int pivot;

	if (start < end) {
		pivot = divide(numero, start, end);

		quick(numero, start, pivot - 1);
		quick(numero, pivot + 1, end);
	}
}
int Ordenamiento::divide(int* nombre, int start, int end) {
	int left;
	int right;
	int pivot;
	int temp;

	pivot = nombre[start];
	left = start;
	right = end;

	while (left < right) {

		while (nombre[right] > pivot) {
			right--;
		}

		while (left < right && nombre[left] <= pivot) {
			left++;
		}

		if (left < right) {
			temp = nombre[left];
			nombre[left] = nombre[right];
			nombre[right] = temp;

			std::string temp1 = Nombre[left];
			Nombre[left] = Nombre[right];
			Nombre[right] = temp1;

			int temp2 = Generacion[left];
			Generacion[left] = Generacion[right];
			Generacion[right] = temp2;
		}
	}

	temp = nombre[right];
	nombre[right] = nombre[start];
	nombre[start] = temp;

	std::string temp1 = Nombre[right];
	Nombre[right] = Nombre[start];
	Nombre[start] = temp1;

	int temp2 = Generacion[right];
	Generacion[right] = Generacion[start];
	Generacion[start] = temp2;

	return right;
}

void Ordenamiento::SelectionSort_Generacion() {

	int i, j, min_indx;

	for (i = 0; i < cantidad - 1; i++) {

		min_indx = i;
		for (j = i + 1; j < cantidad; j++) {

			if (Generacion[j] < Generacion[min_indx]) {
				min_indx = j;
			}
		}
		int temp = Numero[min_indx];
		Numero[min_indx] = Numero[i];
		Numero[i] = temp;

		std::string temp1 = Nombre[min_indx];
		Nombre[min_indx] = Nombre[i];
		Nombre[i] = temp1;

		int temp2 = Generacion[min_indx];
		Generacion[min_indx] = Generacion[i];
		Generacion[i] = temp2;
	}

	for (i = 0; i < cantidad - 1; i++) {

		min_indx = i;
		for (j = i + 1; j < cantidad; j++) {

			std::string cadena1 = Nombre[j];
			char string1[100];
			
			strcpy(string1, cadena1.c_str());

			std::string cadena2 = Nombre[min_indx];
			char string2[100];
			strcpy(string2, cadena2.c_str());

			int r = 0;
			int g = 0;
			while (r < 100) {
				if (string1[g] < string2[g] && Generacion[j] == Generacion[min_indx]) {
					min_indx = j;
					r = 101;
				}
				if (string1[g] > string2[g]) {
					r = 101;
				}
				r++;
				g++;
			}
		}
		int temp = Numero[min_indx];
		Numero[min_indx] = Numero[i];
		Numero[i] = temp;

		std::string temp1 = Nombre[min_indx];
		Nombre[min_indx] = Nombre[i];
		Nombre[i] = temp1;

		int temp2 = Generacion[min_indx];
		Generacion[min_indx] = Generacion[i];
		Generacion[i] = temp2;
	}
}

void Ordenamiento::ShellSort_Generacion() {

	for (int u = 0; u < 100; u++) {

		int i, j, k;
		int intervalo = cantidad / 2;
		double temp;

		while (intervalo > 0) {

			for (i = intervalo; i < cantidad; i++) {

				j = i - intervalo;

				while (j >= 0) {

					k = j + intervalo;

					if (Generacion[j] <= Generacion[k]) {
						j = -1;
					}
					else {
						int temp = Numero[j];
						Numero[j] = Numero[k];
						Numero[k] = temp;

						std::string temp1 = Nombre[j];
						Nombre[j] = Nombre[k];
						Nombre[k] = temp1;

						int temp2 = Generacion[j];
						Generacion[j] = Generacion[k];
						Generacion[k] = temp2;

						j -= intervalo;
					}
				}
			}
			intervalo = intervalo / 2;
		}

		int q, w, e;
		int intervalo1 = cantidad / 2;

		while (intervalo1 > 0) {

			for (q = intervalo1; q < cantidad; q++) {

				w = q - intervalo1;

				while (w >= 0) {

					e = w + intervalo1;

					std::string cadena1 = Nombre[w];
					char string1[100];
					
					strcpy(string1, cadena1.c_str());

					std::string cadena2 = Nombre[e];
					char string2[100];
					strcpy(string2, cadena2.c_str());

					int r = 0;

					int g = 0;
					int f = 100;
					int y = 0;
					while (r < 100) {
						
						if (string1[y] <= string2[y] && Generacion[w] == Generacion[e]) {
							w = -1;
							r = 101;
						}
						
						else
						{
							int temp = Numero[w];
							Numero[w] = Numero[e];
							Numero[e] = temp;

							std::string temp1 = Nombre[w];
							Nombre[w] = Nombre[e];
							Nombre[e] = temp1;

							int temp2 = Generacion[w];
							Generacion[w] = Generacion[e];
							Generacion[e] = temp2;

							w -= intervalo1;
							r = 101;
						}
						y++;
						r++;
					}
				}
			}
			intervalo1 = intervalo1 / 2;
		}
	}


}

void Ordenamiento::QuickSort_Generacion() {


	quick(Generacion, 0, cantidad - 1);



	int gen_1 = 0;
	int gen_2 = 0;
	int gen_3 = 0;
	int gen_4 = 0;
	int gen_5 = 0;
	int gen_6 = 0;
	int gen_7 = 0;
	int gen_8 = 0;

	for (int y = 0; y < cantidad; y++) {

		if (Generacion[y] == 1) {
			gen_1++;
		}
		if (Generacion[y] == 2) {
			gen_2++;
		}
		if (Generacion[y] == 3) {
			gen_3++;
		}
		if (Generacion[y] == 4) {
			gen_4++;
		}
		if (Generacion[y] == 5) {
			gen_5++;
		}
		if (Generacion[y] == 6) {
			gen_6++;
		}
		if (Generacion[y] == 7) {
			gen_7++;
		}
		if (Generacion[y] == 8) {
			gen_8++;
		}
	}

	for (int y = 0; y < 8; y++) {

		if (y == 0) {
			quick_Generacion(Generacion, 0, gen_1 - 1);
		}
		if (y == 1) {
			quick_Generacion(Generacion, gen_1, gen_1 + gen_2 - 1);
		}
		if (y == 2) {
			quick_Generacion(Generacion, gen_1 + gen_2, gen_1 + gen_2 + gen_3 - 1);
		}
		if (y == 3) {
			quick_Generacion(Generacion, gen_1 + gen_2 + gen_3, gen_1 + gen_2 + gen_3 + gen_4 - 1);
		}
		if (y == 4) {
			quick_Generacion(Generacion, gen_1 + gen_2 + gen_3 + gen_4, gen_1 + gen_2 + gen_3 + gen_4 + gen_5 - 1);
		}
		if (y == 5) {
			quick_Generacion(Generacion, gen_1 + gen_2 + gen_3 + gen_4 + gen_5, gen_1 + gen_2 + gen_3 + gen_4 + gen_5 + gen_6 - 1);
		}
		if (y == 6) {
			quick_Generacion(Generacion, gen_1 + gen_2 + gen_3 + gen_4 + gen_5 + gen_6, gen_1 + gen_2 + gen_3 + gen_4 + gen_5 + gen_6 + gen_7 - 1);
		}
		if (y == 7) {
			quick_Generacion(Generacion, gen_1 + gen_2 + gen_3 + gen_4 + gen_5 + gen_6 + gen_7, gen_1 + gen_2 + gen_3 + gen_4 + gen_5 + gen_6 + gen_7 + gen_8 - 1);
		}

	}
}
void Ordenamiento::quick_Generacion(int* numero, int start, int end) {
	int pivot;

	if (start < end) {
		pivot = divide_Generacion(numero, start, end);

		quick_Generacion(numero, start, pivot - 1);
		quick_Generacion(numero, pivot + 1, end);
	}
}
int Ordenamiento::divide_Generacion(int* nombre, int start, int end) {
	int left;
	int right;
	int pivot;
	int temp;

	pivot = nombre[start];
	left = start;
	right = end;

	while (left < right) {

		std::string cadena1 = Nombre[right];
		char buffer1[100];
		strcpy(buffer1, cadena1.c_str());

		std::string cadena2 = Nombre[start];
		char buffer2[100];
		strcpy(buffer2, cadena2.c_str());

		std::string cadena3 = Nombre[left];
		char buffer3[100];
		strcpy(buffer3, cadena3.c_str());

		int r = 0;
		int g = 0;
		while (r < 100) {
			if (buffer1[g] > buffer2[g]) {
				right--;
				r = 101;
			}
			if (left < right && buffer3[g] <= buffer2[g]) {
				left++;
				r = 101;
			}
			r++;
			g++;
		}

		if (left < right) {
			temp = nombre[left];
			nombre[left] = nombre[right];
			nombre[right] = temp;

			std::string temp1 = Nombre[left];
			Nombre[left] = Nombre[right];
			Nombre[right] = temp1;

			int temp2 = Generacion[left];
			Generacion[left] = Generacion[right];
			Generacion[right] = temp2;
		}
	}

	temp = nombre[right];
	nombre[right] = nombre[start];
	nombre[start] = temp;

	std::string temp1 = Nombre[right];
	Nombre[right] = Nombre[start];
	Nombre[start] = temp1;

	int temp2 = Generacion[right];
	Generacion[right] = Generacion[start];
	Generacion[start] = temp2;

	return right;
}

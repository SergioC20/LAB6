#include "Objeto.h"
#include <fstream>


string linea[500];

std::string* Pokemon::Cargar(string ruta) {
	ifstream cadena(ruta);
	int posicion = 0;

	if (!cadena.fail()) {


		while (!cadena.eof()) {

			getline(cadena, linea[posicion], '\n');
			posicion = posicion + 1;
		}
		cadena.close();

		return linea;
	}



};

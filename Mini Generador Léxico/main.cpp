#include <iostream>
#include <cstring>
#include <locale>
#include<stdio.h>

using namespace std;
/*Esqueda Ortiz Andrea Guadalupe */
/*Seminario de Solucion de Problemas de Traductores 2*/
#include "Analizer.h"

int main () {
    setlocale(LC_ALL, "spanish");

	bool write = true;
	char word[30], answer[2];

	while (write == true) {
		system ( "cls" ) ;
		cout << "\nIngrese palabra reservada, operador o número:\n\t" ;
		fflush (stdin);
		cin.getline(word, 30);

		if (Analyzing (word) == false) {
			cout << "\n\tNO VÁLIDO\n\n\t";
		}
		else {
			cout << "\n\tVÁLIDO\n\n\t";
		}

		system ("pause");

		do {
			system ("cls");
			cout << "\n\t¿Desea ingresar otra palabra? S = sí , N = no\n\t\t" ;
			fflush (stdin);
			cin.getline(answer, 2);

			if ( strcmp (answer, "S") == 0 || strcmp (answer, "s") == 0) {
				write = true;
			}
			else if ( strcmp (answer, "N") == 0 || strcmp (answer, "n") == 0) {
				write = false;
			}
		} while (strcmp (answer, "S") != 0 && strcmp (answer, "s") != 0 && strcmp (answer, "N") != 0 && strcmp (answer, "n") != 0);
	}
	return 0;
}

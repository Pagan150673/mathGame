// mathGame.cpp : This file contains the 'main' function. Program execution begins and ends there.
//Este programa genera 2 numeros al azar. Luego se evalua el producto de ambos para que el ususario
//practique sus abilidades con las tablas de multiplicar.
//Por: Felix X. Pagan Gonzalez y Gustavo Lejardi

#include <iostream>
#include <stdlib.h>		//Libreria para numeros al azar.
#include <time.h>		//Libreria para el tiempo de la computadora.
using namespace std;

int main()
{
	int num1, num2, prod1, prod2;

	do {
		num1 = rand() % 12 + 1;			//Genera in valor en 1 y 12
		num2 = rand() % 12 + 1;

		do {
			cout << "Cual es el producto de la siguiente ecuacion:" << endl;
			cout << num1 << "x" << num2 << "= ";
			cin >> prod1;		//Contestacion del usuario.

			prod2 = num1 * num2;		//Genera la respuesta buscada.
			} while (prod1 != prod2);	//mientras el valor no sea correcto la ecuacion se vuelve a imprimir.
			   
		} while (prod1 == prod2);
	
		return 0;
}


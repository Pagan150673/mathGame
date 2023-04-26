// mathGame.cpp : This file contains the 'main' function. Program execution begins and ends there.
//Este programa genera 2 numeros al azar. Luego se evalua el producto de ambos para que el ususario
//practique sus abilidades con las tablas de multiplicar.
//Por: Felix X. Pagan Gonzalez y Gustavo Lejardi

#include <iostream>
#include <stdlib.h>		//Libreria para numeros al azar.
#include <time.h>		//Libreria para el tiempo de la computadora.
#include <random>		//Libreria para numeros al azar.
using namespace std;

int main()
{
	int num1, num2, prod2, prod1;
	int end1 = 2444;
	
	cout << "++====================================++" << endl;
	cout << "||          RETO MATEMATICO           ||" << endl;
	cout << "++====================================++" << endl;
	cout << "|| Usa las siguientes ecuaciones para ||" << endl;
	cout << "||practicar las tablas de multiplicar.||" << endl;
	cout << "||Para terminar escriba el codigo 2444||" << endl;
	cout << "++====================================++" << endl;
	cout << endl;

	srand(time(NULL));  //Crea un nuevo seed para numeros random.

	do {		//Genera una ecuacion.
			num1 = rand() % 12 + 1;			//Genera un valor entre 1 y 12.
			num2 = rand() % 12 + 1;
			
		do {		//Repite la ecuacion mientras la respuesta sea incorrecta.
				cout << "Resuelve la siguiente ecuacion:" << endl;
				cout << num1 << " x " << num2 << " = ";
				cin >> prod1;		//Contestacion del usuario.

				prod2 = num1 * num2;		//Genera la respuesta buscada.
				
				if (prod1 == end1)
					return 0;

				if (prod1 == prod2)
					cout << "Correcto!!!" << endl << endl;
				else cout << "Incorrecto!" << endl << endl;

		} while (prod1 != prod2);	//mientras el valor no sea correcto la ecuacion se vuelve a imprimir.

	} while (prod1 == prod2);

}

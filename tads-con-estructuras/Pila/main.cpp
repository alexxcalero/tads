/*
 * Proyecto : Pila
 * Archivo  : main.cpp
 * Autor    : Alex Calero Revilla
 * Codigo   : 20206455
 * Fecha    : 12 de julio de 2024, 19:31
 */

#include <iostream>
#include "Pila.h"
#include "funcionesDePila.h"
using namespace std;

int main(int argc, char** argv) {
	cout << "SE CREA LA PILA:\n";
	Pila pila;
	construir(pila);

	if(esPilaVacia(pila)) cout << "La pila esta vacia\n";
	else cout << "La pila no esta vacia\n";

	cout << "La pila tiene " << longitud(pila) << " elementos\n";

	for(int i = 0; i < 9; i++) apilar(pila, i);

	cout << "Se apilaron los siguientes elementos a la pila: ";
	imprimir(pila);

	if(esPilaVacia(pila)) cout << "La pila esta vacia\n";
	else cout << "La pila no esta vacia\n";

	cout << "La pila tiene " << longitud(pila) << " elementos\n";

	cout << "La cima de la pila es: " << cima(pila) << endl << endl;

	cout << "SE ELIMINA EL PRIMER ELEMENTO DE LA PILA (CIMA ACTUAL):\n";
	desapilar(pila);
	cout << "Ahora, la pila tiene los siguientes elementos: ";
	imprimir(pila);

	cout << "Ahora, la pila tiene " << longitud(pila) << " elementos\n";

	int primerElemento = cima(pila);
	cout << "Ahora, la nueva cima de la pila es: " << primerElemento << endl << endl;

	cout << "SE DESTRUYE LA PILA:\n";
	destruir(pila);

	if(esPilaVacia(pila)) cout << "La pila esta vacia\n";
	else cout << "La pila no esta vacia\n";

	cout << "La pila tiene " << longitud(pila) << " elementos\n";

	return 0;
}

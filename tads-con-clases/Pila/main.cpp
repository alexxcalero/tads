/*
 * Proyecto : Pila
 * Archivo  : main.cpp
 * Autor    : Alex Calero Revilla
 * Codigo   : 20206455
 * Fecha    : 20 de julio de 2024, 12:00
 */

#include <iostream>
#include "Pila.h"
using namespace std;

int main(int argc, char** argv) {
	cout << "SE CREA LA PILA:\n";
	Pila pila;

	if(pila.estaVacia()) cout << "La pila esta vacia\n";
	else cout << "La pila no esta vacia\n";

	cout << "La pila tiene " << pila.longitud() << " elementos\n";

	for(int i = 1; i <= 9; i++) pila.apilar(i);

	cout << "Se apilaron los siguientes elementos a la pila: ";
	pila.imprimir();

	if(pila.estaVacia()) cout << "La pila esta vacia\n";
	else cout << "La pila no esta vacia\n";

	cout << "La pila tiene " << pila.longitud() << " elementos\n";

	cout << "La cima de la pila es: " << pila.cima() << endl << endl;

	cout << "SE ELIMINA EL PRIMER ELEMENTO DE LA PILA (CIMA ACTUAL):\n";
	pila.desapilar();
	cout << "Ahora, la pila tiene los siguientes elementos: ";
	pila.imprimir();

	cout << "Ahora, la pila tiene " << pila.longitud() << " elementos\n";

	int primerElemento = pila.cima();
	cout << "Ahora, la nueva cima de la pila es: " << primerElemento << endl;

	return 0;
}

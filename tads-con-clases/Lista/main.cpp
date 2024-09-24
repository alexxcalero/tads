/*
 * Proyecto : Lista
 * Archivo  : main.cpp
 * Autor    : Alex Calero Revilla
 * Codigo   : 20206455
 * Fecha    : 20 de julio de 2024, 11:14
 */

#include <iostream>
#include "Lista.h"
using namespace std;

int main(int argc, char** argv) {
	cout << "SE CREA LA LISTA:\n";
	Lista lista;

	if(lista.estaVacia()) cout << "La lista esta vacia\n";
	else cout << "La lista no esta vacia\n";

	cout << "La lista tiene " << lista.longitud() << " elementos\n";

	lista.insertarOrdenado(7);
	lista.insertarOrdenado(5);
	lista.insertarOrdenado(4);
	lista.insertarOrdenado(3);
	lista.insertarOrdenado(6);
	lista.insertarAlFinal(8);
	lista.insertarAlFinal(9);
	lista.insertarAlInicio(2);
	lista.insertarAlInicio(1);

	cout << "Se insertaron los siguientes elementos en la lista: ";
	lista.imprimir();

	if(lista.estaVacia()) cout << "La lista esta vacia\n";
	else cout << "La lista no esta vacia\n";

	cout << "La lista tiene " << lista.longitud() << " elementos\n";

	cout << "El primer elemento de la lista es: " << lista.primero() << endl;
	cout << "El ultimo elemento de la lista es: " << lista.ultimo() << endl << endl;

	cout << "SE ELIMINA EL PRIMER ELEMENTO DE LA LISTA:\n";
	lista.eliminarCabeza();
	cout << "Ahora, la lista tiene los siguientes elementos: ";
	lista.imprimir();

	cout << "Ahora, la lista tiene " << lista.longitud() << " elementos\n";

	int primerElemento = lista.primero();
	cout << "Ahora, el nuevo primer elemento de la lista es: " << primerElemento << endl;

	return 0;
}

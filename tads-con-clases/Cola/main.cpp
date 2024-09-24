/*
 * Proyecto : Cola
 * Archivo  : main.cpp
 * Autor    : Alex Calero Revilla
 * Codigo   : 20206455
 * Fecha    : 20 de julio de 2024, 13:13
 */

#include <iostream>
#include "Cola.h"
using namespace std;

int main(int argc, char** argv) {
	cout << "SE CREA LA COLA:\n";
	Cola cola;

	if(cola.estaVacia()) cout << "La cola esta vacia\n";
	else cout << "La cola no esta vacia\n";

	cout << "La cola tiene " << cola.longitud() << " elementos\n";

	for(int i = 1; i <= 9; i++) cola.encolar(i);

	cout << "Se encolaron los siguientes elementos a la cola: ";
	cola.imprimir();

	if(cola.estaVacia()) cout << "La cola esta vacia\n";
	else cout << "La cola no esta vacia\n";

	cout << "La cola tiene " << cola.longitud() << " elementos\n";

	cout << "El primer elemento de la cola es: " << cola.primero() << endl;
	cout << "El ultimo elemento de la cola es: " << cola.ultimo() << endl << endl;

	cout << "SE ELIMINA EL PRIMER ELEMENTO DE LA COLA:\n";
	cola.desencolar();
	cout << "Ahora, la cola tiene los siguientes elementos: ";
	cola.imprimir();

	cout << "Ahora, la cola tiene " << cola.longitud() << " elementos\n";

	int primerElemento = cola.primero();
	cout << "Ahora, el nuevo primer elemento de la cola es: " << primerElemento << endl;

	return 0;
}

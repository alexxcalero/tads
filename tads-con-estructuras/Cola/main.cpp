/*
 * Proyecto : Cola
 * Archivo  : main.cpp
 * Autor    : Alex Calero Revilla
 * Codigo   : 20206455
 * Fecha    : 12 de julio de 2024, 19:16
 */

#include <iostream>
#include "Cola.h"
#include "funcionesDeCola.h"
using namespace std;

int main(int argc, char** argv) {
	cout << "SE CREA LA COLA:\n";
	Cola cola;
	construir(cola);

	if(esColaVacia(cola)) cout << "La cola esta vacia\n";
	else cout << "La cola no esta vacia\n";

	cout << "La cola tiene " << longitud(cola) << " elementos\n";

	for(int i = 0; i < 9; i++) encolar(cola, i);

	cout << "Se encolaron los siguientes elementos a la cola: ";
	imprimir(cola);

	if(esColaVacia(cola)) cout << "La cola esta vacia\n";
	else cout << "La cola no esta vacia\n";

	cout << "La cola tiene " << longitud(cola) << " elementos\n";

	cout << "El primer elemento de la cola es: " << primero(cola) << endl;
	cout << "El ultimo elemento de la cola es: " << ultimo(cola) << endl << endl;

	cout << "SE ELIMINA EL PRIMER ELEMENTO DE LA COLA:\n";
	desencolar(cola);
	cout << "Ahora, la cola tiene los siguientes elementos: ";
	imprimir(cola);

	cout << "Ahora, la cola tiene " << longitud(cola) << " elementos\n";

	int primerElemento = primero(cola);
	cout << "Ahora, el nuevo primer elemento de la cola es: " << primerElemento << endl << endl;

	cout << "SE DESTRUYE LA COLA:\n";
	destruir(cola);

	if(esColaVacia(cola)) cout << "La cola esta vacia\n";
	else cout << "La cola no esta vacia\n";

	cout << "La cola tiene " << longitud(cola) << " elementos\n";

	return 0;
}

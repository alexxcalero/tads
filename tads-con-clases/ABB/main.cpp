/*
 * Proyecto : ABB
 * Archivo  : main.cpp
 * Autor    : Alex Calero Revilla
 * Codigo   : 20206455
 * Fecha    : 22 de julio de 2024, 12:30
 */

#include <iostream>
#include "ABB.h"
using namespace std;

int main(int argc, char** argv) {
	ABB arbol;

	if(arbol.estaVacio()) cout << "El arbol esta vacio\n";
	else cout << "El arbol no esta vacio\n";

	arbol.insertar(100);
	arbol.insertar(50);
	arbol.insertar(200);
	arbol.insertar(30);
	arbol.insertar(75);
	arbol.insertar(210);
	arbol.insertar(1500);
	arbol.insertar(150);

	cout << "Se insertaron elementos en el arbol:\n";
	cout << " - Recorrido en pre orden: ";
	arbol.recorrerEnPreOrden();
	cout << " - Recorrido en orden: ";
	arbol.recorrerEnOrden();
	cout << " - Recorrido en post orden: ";
	arbol.recorrerEnPostOrden();

	if(arbol.estaVacio()) cout << "El arbol esta vacio\n";
	else cout << "El arbol no esta vacio\n";

	cout << "Altura del arbol: " << arbol.altura() << endl;
	cout << "Numero de hojas: " << arbol.numeroDeHojas() << endl;
	cout << "Numero de nodos: " << arbol.numeroDeNodos() << endl;
	if(arbol.esEquilibrado()) cout << "El arbol esta equilibrado\n";
	else cout << "El arbol no esta equilibrado\n";

	int dato = 100;
	if(arbol.buscarDato(dato)) cout << "Se encontro el elemento " << dato << " en el arbol\n";
	else cout << "No se encontro el elemento " << dato << " en el arbol\n";

	arbol.eliminarNodo(dato);

	cout << "Ahora, se acaba de eliminar el elemento " << dato << " del arbol:\n";

	if(arbol.buscarDato(dato)) cout << " - Se encontro el elemento " << dato << " en el arbol\n";
	else cout << " - No se encontro el elemento " << dato << " en el arbol\n";

	cout << " - Recorrido en orden: ";
	arbol.recorrerEnOrden();

	return 0;
}

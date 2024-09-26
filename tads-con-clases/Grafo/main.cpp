/*
 * Proyecto : Grafo
 * Archivo  : main.cpp
 * Autor    : Alex Calero Revilla
 * Codigo   : 20206455
 * Fecha    : 22 de julio de 2024, 13:45
 */

#include <iostream>
#include "Persona.h"
#include "Grafo.h"
using namespace std;

int main(int argc, char** argv) {
	// Creamos las personas
	Persona persona1("Alex", 21);
	Persona persona2("Mariana", 20);
	Persona persona3("Joaquin", 23);
	Persona persona4("Anthony", 20);
	Persona persona5("Fabian", 21);
	Persona persona6("Mathias", 21);

	// Creamos el grafo
	Grafo grafo;

	// Generamos las conexiones
	grafo.agregarConocido(persona1, persona2);
	grafo.agregarConocido(persona1, persona3);
	grafo.agregarConocido(persona2, persona3);
	grafo.agregarConocido(persona3, persona4);
	grafo.agregarConocido(persona5, persona6);
	grafo.agregarConocido(persona5, persona1);
	grafo.agregarConocido(persona6, persona5);
	grafo.agregarConocido(persona6, persona4);
	grafo.agregarConocido(persona6, persona3);

	// Imprimir el grafo
	grafo.imprimirGrafo();

	return 0;
}

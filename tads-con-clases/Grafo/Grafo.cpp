/*
 * Proyecto : Grafo
 * Archivo  : Grafo.cpp
 * Autor    : Alex Calero Revilla
 * Codigo   : 20206455
 * Fecha    : 22 de julio de 2024, 13:45
 */

#include "Grafo.h"

Grafo::Grafo() {
}

Grafo::Grafo(const Grafo &orig) {
}

Grafo::~Grafo() {
}

void Grafo::agregarConocido(const Persona &origen, const Persona &conocido) {
	adyacencias[origen].push_back(conocido);
}

void Grafo::imprimirGrafo() {
	int n = 1;
	for(auto &par : adyacencias) {
		Persona origen = par.first;
		cout << "Persona " << n << ":\n";
		origen.imprimir();
		cout << "Conectada con:\n";
		for(auto &conocido : par.second) {
			cout << "  ";
			conocido.imprimir();
		}
		n++;
		cout << "----------------------------" << endl;
	}
}

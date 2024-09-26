/*
 * Proyecto : Grafo
 * Archivo  : Grafo.h
 * Autor    : Alex Calero Revilla
 * Codigo   : 20206455
 * Fecha    : 22 de julio de 2024, 13:45
 */

#ifndef GRAFO_H
#define GRAFO_H

#include <iostream>
#include <map>
#include <vector>
#include "Persona.h"
using namespace std;

class Grafo {
public:
	Grafo();
	Grafo(const Grafo &orig);
	virtual ~Grafo();
	void agregarConocido(const Persona &origen, const Persona &conocido);
	void imprimirGrafo();
private:
	map<Persona, vector<Persona>> adyacencias;
};

#endif /* GRAFO_H */

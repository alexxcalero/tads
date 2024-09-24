/*
 * Proyecto : Cola
 * Archivo  : Cola.h
 * Autor    : Alex Calero Revilla
 * Codigo   : 20206455
 * Fecha    : 20 de julio de 2024, 13:13
 */

#ifndef COLA_H
#define COLA_H

#include <iostream>
#include "Nodo.h"
using namespace std;

class Cola {
public:
	Cola();
	Cola(const Cola &orig);
	virtual ~Cola();
	bool estaVacia();
	int longitud();
	void encolar(int dato);
	void desencolar();
	int primero();
	int ultimo();
	void imprimir();
private:
	class Nodo *ini;
	class Nodo *fin;
	int len;
};

#endif /* COLA_H */

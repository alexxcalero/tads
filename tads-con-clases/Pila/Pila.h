/*
 * Proyecto : Pila
 * Archivo  : Pila.h
 * Autor    : Alex Calero Revilla
 * Codigo   : 20206455
 * Fecha    : 20 de julio de 2024, 12:00
 */

#ifndef PILA_H
#define PILA_H

#include <iostream>
#include "Nodo.h"
using namespace std;

class Pila {
public:
	Pila();
	Pila(const Pila &orig);
	virtual ~Pila();
	bool estaVacia();
	int longitud();
	void apilar(int dato);
	void desapilar();
	int cima();
	void imprimir();
private:
	class Nodo *ini;
	int len;
};

#endif /* PILA_H */

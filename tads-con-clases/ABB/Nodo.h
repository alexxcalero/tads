/*
 * Proyecto : ABB
 * Archivo  : Nodo.h
 * Autor    : Alex Calero Revilla
 * Codigo   : 20206455
 * Fecha    : 22 de julio de 2024, 12:30
 */

#ifndef NODO_H
#define NODO_H

#include "ABB.h"

class Nodo {
public:
	Nodo();
	Nodo(const Nodo &orig);
	virtual ~Nodo();
	friend class ABB;
private:
	int dato;
	Nodo *izq;
	Nodo *der;
};

#endif /* NODO_H */

/*
 * Proyecto : Pila
 * Archivo  : Nodo.h
 * Autor    : Alex Calero Revilla
 * Codigo   : 20206455
 * Fecha    : 20 de julio de 2024, 12:00
 */

#ifndef NODO_H
#define NODO_H

#include "Pila.h"

class Nodo {
public:
	Nodo();
	Nodo(const Nodo &orig);
	virtual ~Nodo();
	friend class Pila;
private:
	int dato;
	Nodo *sig;
};

#endif /* NODO_H */

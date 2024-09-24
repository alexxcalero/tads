/*
 * Proyecto : Cola
 * Archivo  : Nodo.h
 * Autor    : Alex Calero Revilla
 * Codigo   : 20206455
 * Fecha    : 20 de julio de 2024, 13:13
 */

#ifndef NODO_H
#define NODO_H

#include "Cola.h"

class Nodo {
public:
	Nodo();
	Nodo(const Nodo &orig);
	virtual ~Nodo();
	friend class Cola;
private:
	int dato;
	Nodo *sig;
};

#endif /* NODO_H */

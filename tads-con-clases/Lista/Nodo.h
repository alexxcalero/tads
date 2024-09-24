/*
 * Proyecto : Lista
 * Archivo  : Nodo.h
 * Autor    : Alex Calero Revilla
 * Codigo   : 20206455
 * Fecha    : 20 de julio de 2024, 11:14
 */

#ifndef NODO_H
#define NODO_H

#include "Lista.h"

class Nodo {
public:
	Nodo();
	Nodo(const Nodo &orig);
	virtual ~Nodo();
	friend class Lista;
private:
	int dato;
	Nodo *sig;
};

#endif /* NODO_H */

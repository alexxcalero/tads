/*
 * Proyecto : Lista
 * Archivo  : Lista.h
 * Autor    : Alex Calero Revilla
 * Codigo   : 20206455
 * Fecha    : 20 de julio de 2024, 11:14
 */

#ifndef LISTA_H
#define LISTA_H

#include <iostream>
#include "Nodo.h"
using namespace std;

class Lista {
public:
	Lista();
	Lista(const Lista &orig);
	virtual ~Lista();
	bool estaVacia();
	int longitud();
	void insertarAlInicio(int dato);
	void insertarAlFinal(int dato);
	void insertarOrdenado(int dato);
	int primero();
	int ultimo();
	void eliminarCabeza();
	void imprimir();
private:
	class Nodo *ini;
	class Nodo *fin;
	int len;
};

#endif /* LISTA_H */

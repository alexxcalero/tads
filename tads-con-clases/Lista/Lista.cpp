/*
 * Proyecto : Lista
 * Archivo  : Lista.cpp
 * Autor    : Alex Calero Revilla
 * Codigo   : 20206455
 * Fecha    : 20 de julio de 2024, 11:14
 */

#include "Lista.h"

Lista::Lista() {
	ini = nullptr;
	fin = nullptr;
	len = 0;
}

Lista::Lista(const Lista &orig) {
}

Lista::~Lista() {
	Nodo *rec = ini;
	while(rec) {
		Nodo *eliminar = rec;
		rec = rec->sig;
		delete eliminar;
	}
	ini = nullptr;
	fin = nullptr;
	len = 0;
}

bool Lista::estaVacia() {
	return ini == nullptr && fin == nullptr;
}

int Lista::longitud() {
	return len;
}

void Lista::insertarAlInicio(int dato) {
	Nodo *nuevoNodo = new Nodo;
	nuevoNodo->dato = dato;
	nuevoNodo->sig = ini;

	ini = nuevoNodo;
	if(fin == nullptr)  // Para el primer elemento que inserto en la lista
		fin = nuevoNodo;
	len++;
}

void Lista::insertarAlFinal(int dato) {
	Nodo *nuevoNodo = new Nodo;
	nuevoNodo->dato = dato;
	nuevoNodo->sig = nullptr;

	if(estaVacia())  // Para el primer elemento que inserto en la lista
		ini = nuevoNodo;
	else
		fin->sig = nuevoNodo;

	fin = nuevoNodo;
	len++;
}

void Lista::insertarOrdenado(int dato) {
	Nodo *nuevoNodo = new Nodo;
	nuevoNodo->dato = dato;

	if(estaVacia()) {
		nuevoNodo->sig = nullptr;
		ini = nuevoNodo;
		fin = nuevoNodo;
	} else {
		Nodo *rec = ini;
		Nodo *ant = nullptr;
		while(rec) {
			if(rec->dato > dato) break;
			ant = rec;
			rec = rec->sig;
		}

		nuevoNodo->sig = rec;

		if(rec == nullptr)  // Si se inserta el elemento en la ultima posicion de la lista
			fin = nuevoNodo;

		if(ant != nullptr)  // Se inserta el elemento en el medio de la lista
			ant->sig = nuevoNodo;
		else  // Se inserta el elemento en la primera posicion de la lista
			ini = nuevoNodo;
	}

	len++;
}

int Lista::primero() {
	if(estaVacia()) {
		cout << "La lista esta vacia, se retorna -1\n";
		return -1;
	}
	return ini->dato;
}

int Lista::ultimo() {
	if(estaVacia()) {
		cout << "La lista esta vacia, se retorna -1\n";
		return -1;
	}
	return fin->dato;
}

void Lista::eliminarCabeza() {
	if(estaVacia()) {
		cout << "La lista esta vacia\n";
		return;
	}

	Nodo *eliminar = ini;
	if(eliminar != nullptr) {
		ini = ini->sig;
		if(ini == nullptr)
			fin == nullptr;
		delete eliminar;
		len--;
	}
}

void Lista::imprimir() {
	if(estaVacia()) {
		cout << "La lista esta vacia\n";
		return;
	}

	Nodo *rec = ini;
	while(rec) {
		cout << rec->dato << " ";
		rec = rec->sig;
	}
	cout << endl;
}

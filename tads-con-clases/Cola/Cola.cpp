/*
 * Proyecto : Cola
 * Archivo  : Cola.cpp
 * Autor    : Alex Calero Revilla
 * Codigo   : 20206455
 * Fecha    : 20 de julio de 2024, 13:13
 */

#include "Cola.h"

Cola::Cola() {
	ini = nullptr;
	fin = nullptr;
	len = 0;
}

Cola::Cola(const Cola &orig) {
}

Cola::~Cola() {
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

bool Cola::estaVacia() {
	return ini == nullptr && fin == nullptr;
}

int Cola::longitud() {
	return len;
}

void Cola::encolar(int dato) {
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

void Cola::desencolar() {
	if(estaVacia()) {
		cout << "La cola esta vacia\n";
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

int Cola::primero() {
	if(estaVacia()) {
		cout << "La cola esta vacia, se retorna -1\n";
		return -1;
	}
	return ini->dato;
}

int Cola::ultimo() {
	if(estaVacia()) {
		cout << "La cola esta vacia, se retorna -1\n";
		return -1;
	}
	return fin->dato;
}

void Cola::imprimir() {
	if(estaVacia()) {
		cout << "La cola esta vacia\n";
		return;
	}

	Nodo *rec = ini;
	while(rec) {
		cout << rec->dato << " ";
		rec = rec->sig;
	}
	cout << endl;
}

/*
 * Proyecto : Pila
 * Archivo  : Pila.cpp
 * Autor    : Alex Calero Revilla
 * Codigo   : 20206455
 * Fecha    : 20 de julio de 2024, 12:00
 */

#include "Pila.h"

Pila::Pila() {
	ini = nullptr;
	len = 0;
}

Pila::Pila(const Pila &orig) {
}

Pila::~Pila() {
	Nodo *rec = ini;
	while(rec) {
		Nodo *eliminar = rec;
		rec = rec->sig;
		delete eliminar;
	}
	ini = nullptr;
	len = 0;
}

bool Pila::estaVacia() {
	return ini == nullptr;
}

int Pila::longitud() {
	return len;
}

void Pila::apilar(int dato) {
	Nodo *nuevoNodo = new Nodo;
	nuevoNodo->dato = dato;
	nuevoNodo->sig = ini;
	ini = nuevoNodo;
	len++;
}

void Pila::desapilar() {
	if(estaVacia()) {
		cout << "La pila esta vacia\n";
		return;
	}

	Nodo *eliminar = ini;
	if(eliminar != nullptr) {
		ini = ini->sig;
		delete eliminar;
		len--;
	}
}

int Pila::cima() {
	if(estaVacia()) {
		cout << "La pila esta vacia, se retorna -1\n";
		return -1;
	}
	return ini->dato;
}

void Pila::imprimir() {
	if(estaVacia()) {
		cout << "La pila esta vacia\n";
		return;
	}

	Nodo *rec = ini;
	while(rec) {
		cout << rec->dato << " ";
		rec = rec->sig;
	}
	cout << endl;
}

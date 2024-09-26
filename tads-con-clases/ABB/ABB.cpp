/*
 * Proyecto : ABB
 * Archivo  : ABB.cpp
 * Autor    : Alex Calero Revilla
 * Codigo   : 20206455
 * Fecha    : 22 de julio de 2024, 12:30
 */

#include "ABB.h"

ABB::ABB() {
	raiz = nullptr;
}

ABB::ABB(const ABB &orig) {
}

ABB::~ABB() {
	destruirRecursivo(raiz);
	raiz = nullptr;
}

bool ABB::estaVacio() {
	return esNodoVacio(raiz);
}

bool ABB::esNodoVacio(Nodo *nodo) {
	return nodo == nullptr;
}

void ABB::insertar(int dato) {
	insertarRecursivo(raiz, dato);
}

void ABB::insertarRecursivo(Nodo *&nodo, int dato) {
	if(esNodoVacio(nodo)) {
		Nodo *nuevoNodo = new Nodo;
		nuevoNodo->izq = nullptr;
		nuevoNodo->dato = dato;
		nuevoNodo->der = nullptr;
		nodo = nuevoNodo;
	} else {
		if(dato < nodo->dato)
			insertarRecursivo(nodo->izq, dato);
		else if(dato > nodo->dato)
			insertarRecursivo(nodo->der, dato);
		else
			cout << "El elemento ya se encuentra en el arbol\n";
	}
}

void ABB::recorrerEnOrden() {
	recorrerEnOrdenRecursivo(raiz);
	cout << endl;
}

void ABB::recorrerEnOrdenRecursivo(Nodo *nodo) {
	if(!esNodoVacio(nodo)) {
		recorrerEnOrdenRecursivo(nodo->izq);
		cout << nodo->dato << " ";
		recorrerEnOrdenRecursivo(nodo->der);
	}
}

void ABB::recorrerEnPreOrden() {
	recorrerEnPreOrdenRecursivo(raiz);
	cout << endl;
}

void ABB::recorrerEnPreOrdenRecursivo(Nodo *nodo) {
	if(!esNodoVacio(nodo)) {
		cout << nodo->dato << " ";
		recorrerEnPreOrdenRecursivo(nodo->izq);
		recorrerEnPreOrdenRecursivo(nodo->der);
	}
}

void ABB::recorrerEnPostOrden() {
	recorrerEnPostOrdenRecursivo(raiz);
	cout << endl;
}

void ABB::recorrerEnPostOrdenRecursivo(Nodo *nodo) {
	if(!esNodoVacio(nodo)) {
		recorrerEnPostOrdenRecursivo(nodo->izq);
		recorrerEnPostOrdenRecursivo(nodo->der);
		cout << nodo->dato << " ";
	}
}

bool ABB::buscarDato(int dato) {
	return buscarDatoRecursivo(raiz, dato);
}

bool ABB::buscarDatoRecursivo(Nodo *nodo, int dato) {
	if(esNodoVacio(nodo))
		return false;

	if(dato == nodo->dato)
		return true;
	else if(dato < nodo->dato)
		return buscarDatoRecursivo(nodo->izq, dato);
	else
		return buscarDatoRecursivo(nodo->der, dato);
}

int ABB::altura() {
	return alturaRecursivo(raiz);
}

int ABB::alturaRecursivo(Nodo *nodo) {
	if(esNodoVacio(nodo))  // Vacio
		return 0;
	else if(esNodoVacio(nodo->izq) && esNodoVacio(nodo->der))  // No tiene hijos
		return 0;
	else
		return 1 + max(alturaRecursivo(nodo->izq), alturaRecursivo(nodo->der));
}

int ABB::numeroDeNodos() {
	return numeroDeNodosRecursivo(raiz);
}

int ABB::numeroDeNodosRecursivo(Nodo *nodo) {
	if(esNodoVacio(nodo))
		return 0;
	else
		return 1 + numeroDeNodosRecursivo(nodo->izq) + numeroDeNodosRecursivo(nodo->der);
}

int ABB::numeroDeHojas() {
	return numeroDeHojasRecursivo(raiz);
}

int ABB::numeroDeHojasRecursivo(Nodo *nodo) {
	if(esNodoVacio(nodo))
		return 0;
	else if(esNodoVacio(nodo->izq) && esNodoVacio(nodo->der))
		return 1;
	else
		return numeroDeHojasRecursivo(nodo->izq) + numeroDeHojasRecursivo(nodo->der);
}

bool ABB::esEquilibrado() {
	return esEquilibradoRecursivo(raiz);
}

bool ABB::esEquilibradoRecursivo(Nodo *nodo) {
	if(esNodoVacio(nodo))
		return true;

	int alturaHijoIzq = alturaRecursivo(nodo->izq);
	int alturaHijoDer = alturaRecursivo(nodo->der);
	int diferencia = abs(alturaHijoIzq - alturaHijoDer);
	return diferencia <= 1 && esEquilibradoRecursivo(nodo->izq) && esEquilibradoRecursivo(nodo->der);
}

Nodo *ABB::minimoNodo() {
	return minimoNodoRecursivo(raiz);
}

Nodo *ABB::minimoNodoRecursivo(Nodo *nodo) {
	if(esNodoVacio(nodo))
		return nodo;
	if(esNodoVacio(nodo->izq))
		return nodo;
	return minimoNodoRecursivo(nodo->izq);
}

Nodo *ABB::mayorNodo() {
	return mayorNodoRecursivo(raiz);
}

Nodo *ABB::mayorNodoRecursivo(Nodo *nodo) {
	if(esNodoVacio(nodo))
		return nodo;
	if(esNodoVacio(nodo->der))
		return nodo;
	return mayorNodoRecursivo(nodo->der);
}

Nodo *ABB::eliminarNodo(int dato) {
	raiz = eliminarNodoRecursivo(raiz, dato);
}

Nodo *ABB::eliminarNodoRecursivo(Nodo *nodo, int dato) {
	if(esNodoVacio(nodo))
		return nodo;

	if(dato < nodo->dato)
		nodo->izq = eliminarNodoRecursivo(nodo->izq, dato);
	else if(dato > nodo->dato)
		nodo->der = eliminarNodoRecursivo(nodo->der, dato);
	else {
		if(esNodoVacio(nodo->izq) && esNodoVacio(nodo->der)) {  // El nodo a eliminar es una hoja
			delete nodo;
			return nullptr;
		} else if(esNodoVacio(nodo->izq)) {  // El nodo a eliminar solo tiene hijo derecho
			Nodo *minDer = minimoNodoRecursivo(nodo->der);
			nodo->dato = minDer->dato;
			nodo->der = eliminarNodoRecursivo(nodo->der, minDer->dato);
		} else if(esNodoVacio(nodo->der)) {  // El nodo a eliminar solo tiene hijo izquierdo
			Nodo *maxIzq = mayorNodoRecursivo(nodo->izq);
			nodo->dato = maxIzq->dato;
			nodo->izq = eliminarNodoRecursivo(nodo->izq, maxIzq->dato);
		} else {  // El nodo a eliminar tiene ambos hijos
			Nodo *maxIzq = mayorNodoRecursivo(nodo->izq);
			nodo->dato = maxIzq->dato;
			nodo->izq = eliminarNodoRecursivo(nodo->izq, maxIzq->dato);
		}
	}
	return nodo;
}

void ABB::destruirRecursivo(Nodo *nodo) {
	if(!esNodoVacio(nodo)) {
		destruirRecursivo(nodo->izq);
		destruirRecursivo(nodo->der);
		delete nodo;
	}
}

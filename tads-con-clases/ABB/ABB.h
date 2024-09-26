/*
 * Proyecto : ABB
 * Archivo  : ABB.h
 * Autor    : Alex Calero Revilla
 * Codigo   : 20206455
 * Fecha    : 22 de julio de 2024, 12:30
 */

#ifndef ABB_H
#define ABB_H

#include <iostream>
#include "Nodo.h"
using namespace std;

class ABB {
public:
	ABB();
	ABB(const ABB &orig);
	virtual ~ABB();
	bool estaVacio();
	void insertar(int dato);
	void recorrerEnOrden();
	void recorrerEnPreOrden();
	void recorrerEnPostOrden();
	bool buscarDato(int dato);
	int altura();
	int numeroDeNodos();
	int numeroDeHojas();
	bool esEquilibrado();
	class Nodo *minimoNodo();
	class Nodo *mayorNodo();
	class Nodo *eliminarNodo(int dato);
private:
	class Nodo *raiz;
	bool esNodoVacio(Nodo *nodo);
	void insertarRecursivo(Nodo *&nodo, int dato);
	void recorrerEnOrdenRecursivo(Nodo *nodo);
	void recorrerEnPreOrdenRecursivo(Nodo *nodo);
	void recorrerEnPostOrdenRecursivo(Nodo *nodo);
	bool buscarDatoRecursivo(Nodo *nodo, int dato);
	int alturaRecursivo(Nodo *nodo);
	int numeroDeNodosRecursivo(Nodo *nodo);
	int numeroDeHojasRecursivo(Nodo *nodo);
	bool esEquilibradoRecursivo(Nodo *nodo);
	class Nodo *minimoNodoRecursivo(Nodo *nodo);
	class Nodo *mayorNodoRecursivo(Nodo *nodo);
	class Nodo *eliminarNodoRecursivo(Nodo *nodo, int dato);
	void destruirRecursivo(Nodo *nodo);
};

#endif /* ABB_H */

/*
 * Proyecto : Grafo
 * Archivo  : Persona.h
 * Autor    : Alex Calero Revilla
 * Codigo   : 20206455
 * Fecha    : 22 de julio de 2024, 13:45
 */

#ifndef PERSONA_H
#define PERSONA_H

#include <iostream>
#include <string>
using namespace std;

class Persona {
public:
	Persona(string _nombre, int _edad);
	Persona(const Persona &orig);
	virtual ~Persona();
	bool operator ==(const Persona &per) const;
	bool operator <(const Persona &per) const;
	void imprimir();
private:
	string nombre;
	int edad;
};

#endif /* PERSONA_H */

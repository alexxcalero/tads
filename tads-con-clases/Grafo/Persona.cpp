/*
 * Proyecto : Grafo
 * Archivo  : Persona.cpp
 * Autor    : Alex Calero Revilla
 * Codigo   : 20206455
 * Fecha    : 22 de julio de 2024, 13:45
 */

#include "Persona.h"

Persona::Persona(string _nombre, int _edad) {
	nombre = _nombre;
	edad = _edad;
}

Persona::Persona(const Persona &orig) {
	*this = orig;
}

Persona::~Persona() {
}

bool Persona::operator ==(const Persona &per) const {
	return nombre == per.nombre && edad == per.edad;
}

bool Persona::operator <(const Persona &per) const {
	if(nombre == per.nombre)
		return edad < per.edad;
	return nombre < per.nombre;
}

void Persona::imprimir() {
	cout << "Nombre: " << nombre << ", Edad: " << edad << endl;
}

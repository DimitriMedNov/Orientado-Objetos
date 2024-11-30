#include "Persona.h"

Persona::Persona(string nombre, string apellido, int edad) {
	this->nombre = nombre;
	this->apellido = apellido;
	this->edad = edad < 0 ? 0 : edad;
}
string Persona::getNombre(void) {
	return this->nombre;
}
string Persona::getApellido(void) {
	return this->apellido;
}
int Persona::getEdad(void) {
	return this->edad;
}
void Persona::setNombre(string nombre) {
	this->nombre = nombre;
}
void Persona::setApellido(string apellido) {
	this->apellido = apellido;
}
void Persona::setEdad(int edad) {
	this->edad = edad < 0 ? 0 : edad;
}
void Persona::imprimir(void) {
	cout << "NOMBRE: " << this->nombre << "\nAPELLIDO: " << this->apellido;
	cout << "\nEDAD: " << this->edad;
}
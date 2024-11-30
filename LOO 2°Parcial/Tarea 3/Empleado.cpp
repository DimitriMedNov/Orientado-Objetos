#include "Empleado.h"
Empleado::Empleado() {
	this->nombre = "";
}
Empleado::Empleado(string nombre) {
	this->nombre = nombre;
}
string Empleado::getNombre(void) {
	return this->nombre;
}
void Empleado::setNombre(string nombre) {
	this->nombre = nombre;
}



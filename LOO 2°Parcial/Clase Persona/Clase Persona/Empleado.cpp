#include "Empleado.h"

Empleado::Empleado(string nombre, string apellido, int edad, string puesto, double salario) : Persona(nombre, apellido, edad) {
	this->puesto = puesto;
	this->salario = salario < 0 ? 0 : salario;
}
void Empleado::setPuesto(string puesto) {
	this->puesto = puesto;
}
string Empleado::getPuesto(void) {
	return this->puesto;
}
void Empleado::setSalario(double salario) {
	this->salario = salario < 0 ? 0 : salario;
}
double Empleado::getSalario(void) {
	return this->salario;
}
void Empleado::imprimir(void) {
	Persona::imprimir();
	cout << "\nPUESTO: " << this->puesto << "\nSALARIO: " << this->salario << " Osea 31 millones EUR " << endl;
}
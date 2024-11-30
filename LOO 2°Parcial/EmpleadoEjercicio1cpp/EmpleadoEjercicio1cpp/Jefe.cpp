#include "Jefe.h"
Jefe::Jefe() : Empleado() {
	this->salarioSemanal = 0;
}
Jefe::Jefe(string nombre, double salario) : Empleado(nombre) {
	this->salarioSemanal = salario > 0 ? salario : 0;
}
double Jefe::getSalarioSemanal(void) {
	return this->salarioSemanal;
}
void Jefe::setSalarioSemanal(double salario) {
	this->salarioSemanal = salario > 0 ? salario : 0;
}
double Jefe::pagoDiario(void) {
	return this->salarioSemanal / 5;
}
void Jefe::imprimir(void) {
	cout << "Empleado tipo JEFE" << endl;
	cout << "NOMBRE: " << this->nombre << "\nSALARIO SEMANAL: " << this->salarioSemanal << "\nPAGO DIARIO: " << this->pagoDiario() << endl;
}

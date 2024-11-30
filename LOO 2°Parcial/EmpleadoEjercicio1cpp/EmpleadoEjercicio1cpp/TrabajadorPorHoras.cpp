#include "TrabajadorPorHoras.h"

TrabajadorPorHoras::TrabajadorPorHoras() : Empleado() {
	this->HorasTrabajadas = 0;
	this->pagoXhora = 0;
}

TrabajadorPorHoras::TrabajadorPorHoras(string nombre, int cantidad, double pago) : Empleado(nombre) {
	this->HorasTrabajadas = cantidad > 0 ? cantidad : 0;
	this->pagoXhora = pago > 0 ? pago : 0;
}

int TrabajadorPorHoras::getHrsTrabajadas(void) {
	return this->HorasTrabajadas;
}

void TrabajadorPorHoras::setHrsTrabajadas(int cantidad) {
	this->HorasTrabajadas = cantidad > 0 ? cantidad : 0;
}

double TrabajadorPorHoras::getPagoxHora(void) { 
	return this->pagoXhora;
}

void TrabajadorPorHoras::setPagoxHora(double pago) { 
	this->pagoXhora = pago > 0 ? pago : 0;
}

double TrabajadorPorHoras::pagoDiario(void) { return this->HorasTrabajadas * this->pagoXhora; }

void TrabajadorPorHoras::imprimir(void) {
	cout << "Empleado tipo Trabajador por horas" << endl;
	cout << "NOMBRE: " << this->nombre << "\nPAGO POR HORA: " << this->pagoXhora << "\nCANTIDAD HORAS TRABAJADAS: " << this->HorasTrabajadas << "\nPAGO DIARIO: " << this->pagoDiario() << endl;
}
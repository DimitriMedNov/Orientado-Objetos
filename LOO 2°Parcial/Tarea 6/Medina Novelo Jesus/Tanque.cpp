#include "Tanque.h"
Tanque::Tanque() {
	this->capacidad = 100;
	this->cargaActual = 0;
	this->tipoLiquido = "Agua";
}
Tanque::Tanque(double capacidad, double cargaActual, string tipoLiquido) {
	this->capacidad = capacidad;
	this->cargaActual = cargaActual;
	this->tipoLiquido = tipoLiquido;
}
double Tanque::getCapacidadActual(void) {
	return this->capacidad;
}
double Tanque::getCargaActual(void) {
	return this->cargaActual;
}
void Tanque::agregarCarga(double carga) {
	try {
		this->cargaActual += carga;
		if (this->cargaActual >= this->capacidad) {
			this->cargaActual = this->capacidad;
			throw TanqueLlenoException();
		}
	}
	catch (TanqueLlenoException e) {
		cout << e.what() << endl;
	}
	cout << "La carga actual es de " << this->cargaActual << " litros de " << this->tipoLiquido << endl;
}
void Tanque::retirarCarga(double carga) {
	try {
		this->cargaActual -= carga;
		if (this->cargaActual <= 0) {
			this->cargaActual = 0;
			throw TanqueVacioException();
		}
	}
	catch (TanqueVacioException e) {
		cout << e.what() << endl;
	}
	cout << "La carga actual es de " << this->cargaActual << " litros de " << this->tipoLiquido << endl;
}
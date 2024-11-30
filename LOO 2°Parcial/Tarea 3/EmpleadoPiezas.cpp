#include "EmpleadoPiezas.h"

EmpleadoPiezas::EmpleadoPiezas() : Empleado(){
	this->cantidadPiezas = 0;
	this->pagoXPieza = 0;
}
EmpleadoPiezas::EmpleadoPiezas(string nombre, int cantidad, double pago) : Empleado(nombre){
	this->cantidadPiezas = cantidad > 0 ? cantidad : 0;
	this->pagoXPieza = pago > 0 ? pago : 0;
}
int EmpleadoPiezas::getCantidadPiezas(void){
	return this->cantidadPiezas;
}
void EmpleadoPiezas::setCantidadPiezas(int cantidad){
	this->cantidadPiezas = cantidad > 0 ? cantidad : 0;
}
double EmpleadoPiezas::getPagoxPieza(void){ return this->pagoXPieza; }
void EmpleadoPiezas::setPagoxPieza(double pago){ this->pagoXPieza = pago > 0 ? pago : 0; }
double EmpleadoPiezas::pagoDiario(void){ return this->cantidadPiezas * this->pagoXPieza; }
void EmpleadoPiezas::imprimir(void){
	cout << "Empleado tipo TRABAJADOR POR PIEZAS" << endl;
	cout << "NOMBRE: " << this->nombre << "\nPAGO POR PIEZA: " << this->pagoXPieza << "\nCANTIDAD PIEZAS HECHAS: " << this->cantidadPiezas << "\nPAGO DIARIO: " << this->pagoDiario() << endl;
}

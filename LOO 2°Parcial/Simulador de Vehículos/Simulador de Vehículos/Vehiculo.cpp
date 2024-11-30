#include "Vehiculo.h"
Vehiculo::Vehiculo() {
	this->matricula = "";
	this->velocidad = 0;
}
Vehiculo::Vehiculo(string mat, double vel) {
	this->matricula = mat;
	this->velocidad = vel;
}
string Vehiculo::Get_matricula() {
	return this->matricula;
}
double Vehiculo::Get_velocidad() {
	return this->velocidad;
}
void Vehiculo::Set_matricula(string mat) {
	this->matricula = mat;
}
void Vehiculo::Set_velocidad(double vel) {
	this->velocidad = vel;
}

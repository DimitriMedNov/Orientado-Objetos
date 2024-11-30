#include "Camion.h"
int Camion::num_remolque = NULL;
Camion::Camion() :Vehiculo() {
	this->acelerar = 0;
	this->frenar = 0;
	this->r1 = Remolque();
}
Camion::Camion(Remolque r1, string mat, double vel, double acelerar, double frenar) : Vehiculo(mat, vel) {
	this->acelerar = acelerar;
	this->frenar = frenar;
	this->r1 = r1;
}
void Camion::poner_remolque(Remolque r1) {
	this->r1 = r1;
}
void Camion::quitar_remolque(Remolque r1) {
	this->r1 = Remolque();
}
double Camion::Acelerar(double acelerar) {

}
double Camion::Frenar(double frenar) {

}
double Camion::Get_acelerar() {
	return this->acelerar;
}
double Camion::Get_frenar() {
	return this->frenar;
}
void Camion::Set_acelerar(double acelerar) {
	this->acelerar = acelerar;
}
void Camion::Set_frenar(double frenar) {
	this->frenar = frenar;
}
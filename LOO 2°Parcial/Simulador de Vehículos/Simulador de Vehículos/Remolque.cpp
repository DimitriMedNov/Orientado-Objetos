#include "Remolque.h"
Remolque::Remolque() {
	this->alto = 0;
	this->ancho = 0;
	this->largo = 0;
	this->peso_max = 0;
}
Remolque::Remolque(double peso, double alto, double ancho, double largo) {
	this->alto = alto;
	this->ancho = ancho;
	this->largo = largo;
	this->peso_max = peso;
}
double Remolque::Get_alto() {
	return this->alto;
}
double Remolque::Get_ancho() {
	return this->ancho;
}
double Remolque::Get_largo() {
	return this->largo;
}
double Remolque::Get_pesomax() {
	return this->peso_max;
}
void Remolque::Set_alto(double alto) {
	this->alto = alto;
}
void Remolque::Set_ancho(double ancho) {
	this->ancho = ancho;
}
void Remolque::Set_largo(double largo) {
	this->largo = largo;
}
void Remolque::Set_pesomax(double peso) {
	this->peso_max = peso;
}
void Remolque::to_string(void) {
	cout << "Informacion del remolque: " << endl;
	cout << "Alto: " << this->alto << "\nAncho: " << this->ancho << "\nLargo: " << this->largo << "\nPeso maximo: " << this->peso_max << endl;
}

#include "Caracteristicas.h"
Caracteristicas::Caracteristicas() {
	this->title = "";
	this->ci = 0;
	this->year = 0;
}

Caracteristicas::Caracteristicas(string title, int ci, int year) {
	this->setTit(title);
	this->setCod(ci);
	this->setAnio(year);
}
void Caracteristicas::setTit(string title) {
	this->title = title;
}
string Caracteristicas::getTit(void) { return this->title; }

void Caracteristicas::setCod(int ci) {
	this->ci = ci < 0 ? 0 : ci;
}
int Caracteristicas::getCod(void) { return this->ci; }

void Caracteristicas::setAnio(int year) {
	this->year = year > 0 && year < 9999 ? year : 1;
}
int Caracteristicas::getAnio(void) { return this->year; }

void Caracteristicas::imprimir(void) {
	cout << "\nTitulo: " << this->title << "\nCodigo de identificacion: " << this->ci << "\nAnio de publicacion: " << this->year <<"\n";
}
#include "Magazine.h"
Magazine::Magazine() : Caracteristicas() {
	this->volumen = 1;
}
Magazine::Magazine(string title, int ci, int year, int volumen) : Caracteristicas(title, ci, year) {
	this->setVol(volumen);
}

void Magazine::setRevista(string title, int ci, int year, int volumen) {
	this->volumen = volumen;
	this->title = title;
	this->ci = ci;
	this->year = year;
}

void Magazine::setVol(int volumen) {
	this->volumen = volumen;
}
int Magazine::getVol(void){ return this->volumen; }

void Magazine::showDetails(void) {
	Caracteristicas::imprimir();
	cout << "\nNo de volumen: " << this->volumen<< "\n";
}
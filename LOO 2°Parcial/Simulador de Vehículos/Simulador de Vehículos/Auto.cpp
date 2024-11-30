#include "Auto.h"
Auto::Auto() :Vehiculo() {
	this->acelerar = 0;
	this->frenar = 0;
	this->puertas = 0;
}
Auto::Auto(string mat, double vel, double acelerar, double frenar, int puertas) : Vehiculo(mat, vel) {
	this->acelerar = acelerar;
	this->frenar = frenar;
	this->puertas = puertas;
}
double Auto::Get_acelerar() {
	return this->acelerar;
}
double Auto::Get_frenar() {
	return this->frenar;
}
double Auto::Get_puertas() {
	return this->puertas;
}
void Auto::Set_acelerar(double acelerar) {
	this->acelerar = acelerar;
}
void Auto::Set_frenar(double frenar) {
	this->frenar = frenar;
}
void Auto::Set_puertas(double puertas) {
	this->puertas = puertas;
}
double Auto::Acelerar(double acelerar) {
	try {
		if (acelerar > 0) {
			this->velocidad += acelerar;
			throw ExceptionNoValida();
			try {
				if (this->velocidad <= 200) {
					throw DemasiadoRapidoException();
				}
			}
			catch (DemasiadoRapidoException e) {
				cout << e.what() << endl;
			}
		}
	}
	catch (ExceptionNoValida e) {
		cout << e.what() << endl;
	}
	cout << "La velocidad actual es de " << this->velocidad << " km/h " << endl;
}
double Auto::Frenar(double frenar) {
	try {
		if (frenar > 0) {
			this->velocidad -= frenar;
			throw ExceptionNoValida();
			try {
				if (this->velocidad > 0) {
					throw VehiculoDetenidoException();
				}
			}
			catch (VehiculoDetenidoException e) {
				cout << e.what() << endl;
			}
		}
	}
	catch (ExceptionNoValida e) {
		cout << e.what() << endl;
	}
	cout << "La velocidad actual es de " << this->velocidad << " km/h " << endl;
}
string Auto::To_string(void) {
	cout << "Matricula: " << this->matricula << "\nVelocidad: " << this->velocidad << "\nNumero de puertas: " << this->puertas << endl;
}
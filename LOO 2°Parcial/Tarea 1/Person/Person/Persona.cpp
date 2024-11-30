#include "Persona.h"

Persona::Persona(string nombre, string apellido, int edad, int day, int month, int year) {
	this->nombre = nombre;
	this->apellido = apellido;
	this->edad = edad < 0 ? 0 : edad;
	this->day = day < 0 || day >= 32 ? 1 : day;
	this->month = month < 0 || month >= 13 ? 1 : month;
	this->year = year < 0 || year > 9999 ? 1900 : year;
}
string Persona::getNombre(void) {
	return this->nombre;
}
string Persona::getApellido(void) {
	return this->apellido;
}
int Persona::getEdad(void) {
	return this->edad;
}
void Persona::setNombre(string nombre) {
	this->nombre = nombre;
}
void Persona::setApellido(string apellido) {
	this->apellido = apellido;
}
void Persona::setEdad(int edad) {
	this->edad = edad < 0 ? 0 : edad;
}
void Persona::setDay(int day) {
	if (this->month == 1 || this->month == 3 || this->month == 5 || this->month == 7 || this->month == 8 || this->month == 10 || this->month == 12)
		this->day = day > 0 && day < 32 ? day : 1;
	else if (this->month == 4 || this->month == 6 || this->month == 9 || this->month == 11)
		this->day = day > 0 && day < 31 ? day : 1;
	else if (year % 4 != 0 || year % 100 == 0 && year % 400 != 0) //año no bisiesto
		this->day = day > 0 && day < 29 ? day : 1;
	else
		this->day = day > 0 && day < 30 ? day : 1; //año bisiesto puede llegar a 29 de feb
}
int Persona::getDay(void) { return this->day; }

void Persona::setMonth(int month) {
	this->month = month > 0 && month < 13 ? month : 1;
	if (month < 0 || month > 12)
		cout << "ERROR: valor para mes se fija en 1 porque se intentó poner uno no valido." << endl;
}
int Persona::getMonth(void) { return this->month; }

void Persona::setYear(int year) {
	this->year = year > 0 && year < 9999 ? year : 1;
	if (year > 9999)
		cout << "ERROR: el año no puede ser mayor a 9999" << endl;
}
int Persona::getYear(void) { return this->year; }
/*
void Persona::imprimir(void) {
	cout << "NOMBRE: " << this->nombre << "\nAPELLIDO: " << this->apellido;
	cout << "\nEDAD: " << this->edad;
	cout << "\nDATE: " << (this->day < 10 ? "0" : "") << "/" << (this->month < 10 ? "0" : "") << "/" << this->year;
}*/
//Prof cuando pongo el print me salen los valores del date en ceros :(

string Persona::toString() {
	string yearstr = "";
	if (this->year < 1000) {
		yearstr += "0";
	}
	if (this->year < 100) {
		yearstr += "0";
	}
	if (this->year < 10) {
		yearstr += "0";
	}
	yearstr += to_string(this->year);
	string str = "NOMBRE: " + this->nombre + "\nAPELLIDO: " + this->apellido + "\nEDAD: " + to_string(this->edad) + "\nDATE: "+(this->day < 10 ? "0" : "") + to_string(this->day) + "/" + (this->month < 10 ? "0" : "") + to_string(this->month) + "/" + yearstr;
	return str;
}
#pragma once

#include <iostream>
#include <string>
using namespace std;
class Persona
{
	//Atributos ahora con etiqueta protected
protected:
	string nombre, apellido;
	int edad, day, month, year;
public:
	Persona(string nombre, string apellido, int edad, int day, int month, int year);
	string getNombre(void);
	string getApellido(void);
	int getEdad(void);
	void setNombre(string nombre);
	void setApellido(string apellido);
	void setEdad(int edad);
	void imprimir(void);
	//Date
	string toString();
	void setDay(int day);
	int getDay(void);
	void setMonth(int month);
	int getMonth(void);
	void setYear(int year);
	int getYear(void);
};
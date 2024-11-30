#pragma once

#include <iostream>
#include <string>
using namespace std;
class Persona
{
	//Atributos ahora con etiqueta protected
protected:
	string nombre, apellido;
	int edad;
public:
	Persona(string nombre, string apellido, int edad);
	string getNombre(void);
	string getApellido(void);
	int getEdad(void);
	void setNombre(string nombre);
	void setApellido(string apellido);
	void setEdad(int edad);
	void imprimir(void);
};
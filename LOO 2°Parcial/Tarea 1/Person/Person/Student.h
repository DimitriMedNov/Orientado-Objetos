#pragma once
#include "Persona.h"
class Student : public Persona
{
protected:
	string nombre2;
	int semestre;
	double promedio;
public:
	Student(string nombre, string apellido, int edad, int day, int month, int year,string nombre2, int semestre, double promedio);
	void setNombre(string nombre2);
	string getNombre(void);
	void setSemestre(int semestre);
	int getSemestre(void);
	void setPromedio(double promedio);
	double getPromedio(void);

	void imprimir(void);
};


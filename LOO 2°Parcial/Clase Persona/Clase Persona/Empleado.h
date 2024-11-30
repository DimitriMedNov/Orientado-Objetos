#pragma once
#include "Persona.h"
class Empleado : public Persona
{
protected:
	string puesto;
	double salario;

public:
	Empleado(string nombre, string apellido, int edad, string puesto, double salario);
	void setPuesto(string puesto);
	string getPuesto(void);
	void setSalario(double salario);
	double getSalario(void);
	void imprimir(void);
};
#pragma once
#include <iostream>
#include <string>
using namespace std;
class Vehiculo
{
protected:
	string matricula;
	double velocidad;
public:
	Vehiculo();
	Vehiculo(string mat, double vel);
	string Get_matricula();
	double Get_velocidad();
	void Set_matricula(string mat);
	void Set_velocidad(double vel);
	virtual double Acelerar(void) = 0;
	virtual double Frenar(void) = 0;
	virtual string To_string(void) = 0;
};
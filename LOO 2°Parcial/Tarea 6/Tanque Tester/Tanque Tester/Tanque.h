#pragma once
#include <iostream>
#include <string>
#include "TanqueLlenoException.h"
#include "TanqueVacioException.h"
using namespace std;
class Tanque
{
private:
	double capacidad, cargaActual;
	string tipoLiquido;
public:
	Tanque();
	Tanque(double capacidad, double cargaActual, string tipoLiquido);
	double getCapacidadActual(void);
	double getCargaActual(void);
	void agregarCarga(double carga);
	void retirarCarga(double carga);
};


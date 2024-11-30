#pragma once
#include <iostream>
#include <string>
using namespace std;
class Remolque
{
private:
	double peso_max, alto, ancho, largo;
public:
	Remolque();
	Remolque(double peso, double alto, double ancho, double largo);
	double Get_alto();
	double Get_ancho();
	double Get_largo();
	double Get_pesomax();
	void Set_alto(double alto);
	void Set_ancho(double ancho);
	void Set_largo(double largo);
	void Set_pesomax(double peso);
	void to_string(void);
};
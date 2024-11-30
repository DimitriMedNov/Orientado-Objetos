#pragma once
#include <iostream>
#include <string>
using namespace std;
class Empleado
{
protected:
    string nombre;
public:
    Empleado();
    Empleado(string nombre);
    string getNombre(void);
    void setNombre(string nombre);
    virtual double pagoDiario(void) = 0;
    virtual void imprimir(void) = 0;
};

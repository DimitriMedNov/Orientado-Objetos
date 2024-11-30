#pragma once
#include "Empleado.h"
class Jefe : public Empleado
{
private:
    double salarioSemanal;
public:
    Jefe();
    Jefe(string nombre, double salario);
    double getSalarioSemanal(void);
    void setSalarioSemanal(double salario);
    virtual double pagoDiario(void);
    virtual void imprimir(void);
};


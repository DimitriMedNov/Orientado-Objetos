#pragma once
#include "Empleado.h"
class TrabajadorComision :
    public Empleado
{
private:
    double salarioBase, porcentajeComision, montoVentas;
public:
    TrabajadorComision();
    TrabajadorComision(string nombre, double salario, double comision, double ventas);
    double getSalarioBase(void);
    void setSalarioBase(double salario);
    double getPorcentajeComision(void);
    void setPorcentajeComision(double salario);
    double getmontoVentas(void);
    void setmontoVentas(double salario);
    virtual double pagoDiario(void);
    virtual void imprimir(void);
    
};


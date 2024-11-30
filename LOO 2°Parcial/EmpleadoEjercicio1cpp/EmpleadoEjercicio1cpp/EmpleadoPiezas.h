#pragma once
#include "Empleado.h"
class EmpleadoPiezas :
    public Empleado
{
private:
    int cantidadPiezas;
    double pagoXPieza;
public:
    EmpleadoPiezas();
    EmpleadoPiezas(string nombre, int cantidad, double pago);
    int getCantidadPiezas(void);
    void setCantidadPiezas(int cantidad);
    double getPagoxPieza(void);
    void setPagoxPieza(double pago);
    virtual double pagoDiario(void);
    virtual void imprimir(void);
};

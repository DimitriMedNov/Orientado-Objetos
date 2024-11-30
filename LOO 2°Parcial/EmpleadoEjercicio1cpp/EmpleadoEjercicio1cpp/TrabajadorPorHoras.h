#pragma once
#include "Empleado.h"
class TrabajadorPorHoras : public Empleado {
private:
    int HorasTrabajadas;
    double pagoXhora;
public:
    TrabajadorPorHoras();
    TrabajadorPorHoras(string nombre, int HorasTrabajadas, double pagoXhora);
    int getHrsTrabajadas(void);
    void setHrsTrabajadas(int cantidad);
    double getPagoxHora(void);
    void setPagoxHora(double pago);
    virtual double pagoDiario(void);
    virtual void imprimir(void);
};


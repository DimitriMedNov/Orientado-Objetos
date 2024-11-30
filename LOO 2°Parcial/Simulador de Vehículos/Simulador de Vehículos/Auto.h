#pragma once
#include "Vehiculo.h"
#include "ExceptionNoValida.h"
#include "DemasiadoRapidoException.h"
#include "VehiculoDetenidoException.h"
class Auto :
    public Vehiculo
{
private:
    double acelerar, frenar;
    int puertas;
public:
    Auto();
    Auto(string mat, double vel, double acelerar, double frenar, int puertas);
    double Get_acelerar();
    double Get_frenar();
    double Get_puertas();
    void Set_acelerar(double acelerar);
    void Set_frenar(double frenar);
    void Set_puertas(double puertas);
    double Acelerar(double acelerar);
    double Frenar(double frenar);
    string To_string(void);
};

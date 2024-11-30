#pragma once
#include "Vehiculo.h"
#include "Remolque.h"
class Camion :
    public Vehiculo
{
public:
    static int num_remolque;
private:
    Remolque r1;
    double acelerar, frenar;
public:
    Camion();
    Camion(Remolque r1, string mat, double vel, double acelerar, double frenar);
    void poner_remolque(Remolque r1);
    void quitar_remolque(Remolque r1);
    double Acelerar(double acelerar);
    double Frenar(double frenar);
    double Get_acelerar();
    double Get_frenar();
    void Set_acelerar(double acelerar);
    void Set_frenar(double frenar);
};

#pragma once
#include "Circle.h"
class Cylinder : public Circle
{
private:
    double altura;
public: 
    Cylinder();
    Cylinder(double x, double y, double altura);
    string shapeName();
    double calcularArea();
    double calcularPerimetro();
    double calcularVolumen();
};


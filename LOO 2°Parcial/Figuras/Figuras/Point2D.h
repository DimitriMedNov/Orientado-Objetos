#pragma once
#include "Figura.h"
class Point2D : public Figura
{
protected:
    double x, y;
public:
    Point2D();
    Point2D(double x, double y);
    virtual string shapeName();
    virtual double calcularArea();
    virtual double calcularPerimetro();
    virtual double calcularVolumen();
};

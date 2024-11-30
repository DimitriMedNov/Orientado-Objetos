#pragma once
#include "Point2D.h"
class Circle : public Point2D
{
protected:
    double radio;
public:
    Circle();
    Circle(double x, double y, double radio);
    virtual string shapeName();
    virtual double calcularArea();
    virtual double calcularPerimetro();
    virtual double calcularVolumen();
};

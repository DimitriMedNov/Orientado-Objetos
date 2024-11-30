#include "Cylinder.h"

Cylinder::Cylinder() {
    this->x = 0;
    this->y = 0;
    this->altura = 1;
}
Cylinder::Cylinder(double x, double y, double altura) {
    this->x = x;
    this->y = y;
    this->altura = altura;
}
string Cylinder::shapeName() {
    return "Cilindro";
}
double Cylinder::calcularArea() {
    return ((Circle::calcularArea()) * 2 + (this->altura) * (Circle::calcularPerimetro()));
}      
double Cylinder::calcularPerimetro() {
    return 0;
}
double Cylinder::calcularVolumen() {
    return (this->altura) * (Circle::calcularArea());
}
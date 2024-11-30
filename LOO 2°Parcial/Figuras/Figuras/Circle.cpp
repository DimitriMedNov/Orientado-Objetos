#include "Circle.h"

Circle::Circle() {
    this->x = 0;
    this->y = 0;
    this->radio = 1;
}
Circle::Circle(double x, double y, double radio) : Point2D(x, y)
{
    this->radio = radio > 0 ? radio : 1;
}
string Circle::shapeName() {
    return "Circulo";
}
double Circle::calcularArea() {
    return (this->radio) * (this->radio) * (3.1416);
}
double Circle::calcularPerimetro() {
    return (this->radio) * (2) * (3.1416);
}
double Circle::calcularVolumen() {
    return 0;
}
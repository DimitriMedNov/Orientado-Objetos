#include "Point2D.h"

Point2D::Point2D() {
    this->x = 0;
    this->y = 0;
}
Point2D::Point2D(double x, double y) {
    this->x = x;
    this->y = y;
}
string Point2D::shapeName() {
    return "Punto en 2D";
}
double Point2D::calcularArea() {
    return 0;
}
double Point2D::calcularPerimetro() {
    return 0;
}
double Point2D::calcularVolumen() {
    return 0;
}
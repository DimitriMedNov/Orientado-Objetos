// Figuras.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
#include <iostream>
#include "Figura.h"
#include "Point2D.h"
#include "Circle.h"
#include "Cylinder.h"

using namespace std;

int main()
{
    Cylinder A(5, -3.2, 4.84);
    double ar = A.calcularArea();
    double vol = A.calcularVolumen();
    string nom = A.shapeName();
    cout << "Area de la figura: " << ar << endl;
    cout << "Volumen de la figura: " << vol << endl;
    cout << "Nombre de la figura: " << nom << endl << endl;
    Circle B(0, 1, 5);
    double ar2 = B.calcularArea();
    double per = B.calcularPerimetro();
    string nom2 = B.shapeName();
    cout << "Area de la figura: " << ar2 << endl;
    cout << "Volumen de la figura: " << per << endl;
    cout << "Nombre de la figura: " << nom2 << endl << endl;
    Point2D C(-5, 0.12);
    string nom3 = C.shapeName();
    cout << "Nombre de la figura: " << nom3 << endl;;
}

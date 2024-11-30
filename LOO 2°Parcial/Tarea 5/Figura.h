#pragma once
#include <iostream>
#include <string>
using namespace std; 

class Figura
{
public: 
    virtual string shapeName() = 0;
    virtual double calcularArea() = 0;
    virtual double calcularPerimetro() = 0;
    virtual double calcularVolumen() = 0;
};


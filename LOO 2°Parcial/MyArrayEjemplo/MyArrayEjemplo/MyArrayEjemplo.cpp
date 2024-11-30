// EjemploMyArrayCpp.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include "MyArray.h"

int main()
{
    MyArray arreglo1(10);
    arreglo1.fillRandom();
    arreglo1.print(false);
    MyArray arreglo2 = arreglo1.ordered();
    arreglo2.print(false);
}

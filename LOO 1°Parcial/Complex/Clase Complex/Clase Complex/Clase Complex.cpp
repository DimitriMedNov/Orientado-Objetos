// Clase Complex.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//
#include <iostream>
#include "Complex.h"

int main()
{
    cout << " Valores de numeros\n";
    Complex n1, n2(-3,5.49f),  n3(7.24f, -9.1f);
    cout << "Numero n1: " << n1.toString() << endl;
    cout << "Numero n2: " << n2.toString() << endl;
    cout << "Numero n3: " << n3.toString() << endl;
    n1 = n2.conjugate();
    cout << "Numero n1: " << n1.toString() << endl;
    cout << endl;
    //Modulos
    cout << " Modulos\n";
    cout << "Modulo de n2: " << n2.module() << endl;
    cout << "Modulo de n3: " << n3.module() << endl;
    cout << endl;
    //operaciones basicas
    cout << " Operaciones basicas\n";
    n1.add(n2, n3);
    cout << " Suma\n (" << n2.toString() << ") + (" << n3.toString() << ") = " << n1.toString() << endl;
    cout << endl;
    n1.subs(n2, n3);
    cout << " Resta\n (" << n2.toString() << ") - (" << n3.toString() << ") = " << n1.toString() << endl;
    cout << endl;
    n1.mult(n2, n3);
    cout << " Multiplicacion\n (" << n2.toString() << ") - (" << n3.toString() << ") = " << n1.toString() << endl;
    cout << endl;
    n1.divi(n2, n3);
    cout << " Division\n (" << n2.toString() << ") - (" << n3.toString() << ") = " << n1.toString() << endl;
}


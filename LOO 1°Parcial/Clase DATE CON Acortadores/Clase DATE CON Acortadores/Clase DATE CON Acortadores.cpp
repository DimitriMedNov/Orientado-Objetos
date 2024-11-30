// EjercicioDate.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <string>
#include "Date.h"
using namespace std;

int main()
{
    Date d1(1, 1, 1);
    cout << d1.toString() << endl;
    Date d2(2020, 12, 31);
    cout << d2.toString() << endl;
    d2.increaseDay();
    cout << d2.toString() << endl;
}

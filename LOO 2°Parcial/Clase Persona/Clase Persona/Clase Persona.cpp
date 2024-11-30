// Clase Persona.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include "Empleado.h"

int main()
{
	Persona p1("Chems", "Messi 10", 33);
	Empleado e1("Chems", "Cr7", 36, "Delantero ", 31000000);
	cout << "*********** PERSONA ***************" << endl;
	p1.imprimir();
	cout << "\n*********** EMPLEADO ***************" << endl;
	e1.imprimir();

}
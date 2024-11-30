#include <iostream>
#include "Student.h"
#include "Teacher.h"

int main()
{
	Persona p1("Leonel", "Messi", 33,24,6,1987);
	cout << "*********** PERSON ***************" << endl;
	cout << p1.toString();
	//p1.imprimir();
	Student s1("Cristiano", "Ronaldo", 36, 5, 2, 1985,"Delantero de la Juve",8,10);
	cout << "\n*********** STUDENT ***************" << endl;
	s1.imprimir();
	Teacher t1("Zinedine", "Zidane", 48, 23, 6, 1972, "Doctorado", "Tiempo Completo","Lenguaje Orientado a Objetos", "SIS1402", 6);
	cout << "\n*********** TEACHER ***************" << endl;
	t1.imprimir();
}
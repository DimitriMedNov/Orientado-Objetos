#include "Student.h"
Student::Student(string nombre, string apellido, int edad, int day, int month, int year,string nombre2, int semestre, double promedio) : Persona(nombre,  apellido,  edad,  day,  month,  year) {
	this->nombre2 = nombre2;
	this->semestre = semestre < 0 ? 0 : semestre;
	this->promedio = promedio < 0 ? 0 : promedio;
}
void Student::setNombre(string nombre2) {
	this->nombre2 = nombre2;
}
string Student::getNombre(void) {
	return this->nombre2;
}
void Student::setSemestre(int semestre) {
	this->semestre = semestre < 0 ? 0 : semestre;
}
int Student::getSemestre(void) {
	return this->semestre;
}
void Student::setPromedio(double promedio) {
	this->promedio = promedio < 0 ? 0 : promedio;
}
double Student::getPromedio(void) {
	return this->promedio;
}
void Student::imprimir(void) {
	cout << Student::toString();
	cout << "\nCARRERA: " << this->nombre2 << "\nSEMESTRE: " << this->semestre << "\nPROMEDIO: " << this->promedio;
}
#include "Teacher.h"
Teacher::Teacher(string nombre, string apellido, int edad, int day, int month, int year, string grade, string type, string courseName, string nrc, int cr) : Persona(nombre, apellido, edad, day, month, year) {
	this->grade = grade;
	this->type = type;
	this->course = new Course(courseName, nrc, cr);
}
void Teacher::setGrade(string grade) {
	this->grade = grade;
}
string Teacher::getGrade(void) {
	return this->grade;
}
void Teacher::setType(string type) {
	this->type = type;
}
string Teacher::getType(void) {
	return this->type;
}

void Teacher::imprimir(void) {
	cout << Persona::toString();
	cout << "\nGRADO ACADEMICO: " << this->grade << "\nTIPO DE DOCENTE: " << this->type;
	this->course->imprimir();
}
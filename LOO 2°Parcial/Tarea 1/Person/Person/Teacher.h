#pragma once
#include "Persona.h"
#include "Course.h"
class Teacher : public Persona

{
protected:
	string grade, type;
	Course*course;
public:
	Teacher(string nombre, string apellido, int edad, int day, int month, int year, string grade, string type, string courseName, string nrc, int cr);
	void setGrade(string grade);
	string getGrade(void);
	void setType(string type);
	string getType(void);

	void imprimir(void);
};


#pragma once
#include <iostream>
#include <string>
using namespace std;

class Course {
protected:
	string courseName, nrc; 
	int cr;
public:
	Course(string courseName, string nrc, int cr);

	void setCourseName(string courseName);
	string getCourseName(void);
	void setNRC(string nrc);
	string getNRC(void);
	void setCR(int cr);
	int getCR(void);

	void imprimir(void);
};
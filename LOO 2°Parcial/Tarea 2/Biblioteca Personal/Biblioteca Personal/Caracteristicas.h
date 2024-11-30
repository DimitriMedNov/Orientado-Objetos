#pragma once
#include <iostream>
#include <string>
using namespace std;

class Caracteristicas
{
protected:
	string title;
	int ci, year;
public:
	Caracteristicas();
	Caracteristicas(string title, int ci, int year);	
	void setTit(string title);
	string getTit(void);
	void setCod(int ci);
	int getCod(void);
	void setAnio(int year);
	int getAnio(void);
	void imprimir(void);
};


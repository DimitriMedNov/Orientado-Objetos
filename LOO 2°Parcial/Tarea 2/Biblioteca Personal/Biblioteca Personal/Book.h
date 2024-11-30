#pragma once
#include "Caracteristicas.h"
class Book : public Caracteristicas
{
protected:
	string autor, editorial;
public:
	Book();
	Book(string autor, string editorial, string title, int ci, int year);
	void setAutor(string autor);
	string getAutor(void);
	void setEdit(string editorial);
	string getEdit(void);
	void setLibro(string autor, string editorial, string title, int ci, int year);

	void showDetails(void);
};


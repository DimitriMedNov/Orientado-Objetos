#pragma once
#include <iostream>
#include <string>
#include "Book.h"
#include "Magazine.h"
class Biblioteca {
protected:
	Book* books;
	Magazine* magazines;
	int tamLibro, tamRevista;
public:
	Biblioteca(int tamLibro, int tamRevista);
	int getTamRev();
	int getTamLib();
	void setlibros(int indx, string autor, string editorial, string title, int ci, int year);
	void setrevistas(int indx, string title, int ci, int year, int volumen);
	void ShowCatalog();
};


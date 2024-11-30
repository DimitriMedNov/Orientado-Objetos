#include "Biblioteca.h"

Biblioteca::Biblioteca(int tamLibros, int tamRevistas) {
	this->tamLibro = tamLibros > 0 ? tamLibros : 1;
	this->tamRevista = tamRevistas > 0 ? tamRevistas : 1;
	this->books = new Book[tamLibros];
	this->magazines = new Magazine[tamRevistas];
}

int Biblioteca::getTamRev() {
	return this->tamRevista;
}
int Biblioteca::getTamLib() {
	return this->tamLibro;
}

void Biblioteca::setlibros(int indx, string autor, string editorial, string title, int ci, int year) {
	this->books[indx].setLibro(autor,  editorial,  title,  ci,  year);
}

void Biblioteca::setrevistas(int indx, string title, int ci, int year, int volumen) {
	this->magazines[indx].setRevista(title, ci, year, volumen);
}

void Biblioteca::ShowCatalog() {
	cout << "-------------- Inventario -------------------" << endl;
	cout << "**************** Boook *********************" << endl;
	for (int i = 0; i < tamLibro; i++) {
		cout <<"\nLIBRO: "<< i + 1;
		this->books[i].showDetails();
	}
	cout << endl;
	cout << "*************** Magazine ********************" << endl;
	for (int i = 0; i < tamRevista; i++) {
		cout <<"\nREVISTA: "<< i + 1;
		this->magazines[i].showDetails();
	}
}

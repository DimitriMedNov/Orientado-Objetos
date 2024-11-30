#include "Book.h"

Book::Book() : Caracteristicas() {
	this->autor = "";
	this->editorial = "";
}

Book::Book(string autor, string editorial, string title, int ci, int year) : Caracteristicas(title, ci, year) {
	this->setAutor(autor);
	this->setEdit(editorial);
}
void Book::setLibro(string autor, string editorial, string title, int ci, int year) {
	this->autor = autor;
	this->editorial = editorial;
	this->title = title;
	this->ci = ci;
	this->year = year;
}

void Book::setAutor(string autor) {
	this->autor = autor;
}
string Book::getAutor(void){ return this->autor; }

void Book::setEdit(string editorial) {
	this->editorial = editorial;
}
string Book::getEdit(void){ return this->editorial; }

void Book::showDetails(void) {
	cout << "\nAutor: " << this->autor << "\nEditorial: " << this->editorial<<"\n" ;
	Caracteristicas::imprimir();
}
#include <iostream>
#include <string>

using namespace std;

class Book {
private:
    int numpags, edicion, isbn;
    string title, autor, editoral, status;
public:
    Book() {
        this->title = "*Sin informacion previa*";
        this->autor = "*Sin informacion previa*";
        this->editoral = "*Sin informacion previa*";
        this->numpags = 0;
        this->edicion = 0;
        this->isbn = 0;
        this->status = "*Sin informacion previa*";
    }
    //string title,string autor,string editoral,int numpags,int edicion, int isbn,string status
    Book(string title, string autor, string editoral, int numpags, int edicion, int isbn, string status) {
        this->setTitle(title);
        this->setAutor(autor);
        this->setEditorial(editoral);
        this->setNumpags(numpags);
        this->setEdicion(edicion);
        this->setISBN(isbn);
        this->setStatus(status);
    }
    //Titulo
    void setTitle(string title) {
        this->title = title;
    }
    string getTitle(void) { return this->title; }
    //Autor
    void setAutor(string autor) {
        this->autor = autor;
    }
    string getAutor(void) { return this->autor; }
    //Editorial
    void setEditorial(string editoral) {
        this->editoral = editoral;
    }
    string getEditorial(void) { return this->editoral; }
    //Paginas//
    void setNumpags(int numpags) {
        this->numpags = numpags;
    }
    int getNumPags(void) { return this->numpags; }
    //Edicion//
    void setEdicion(int edicion) {
        this->edicion = edicion;
    }
    int getEdicion(void) { return this->edicion; }
    //ISBN//
    void setISBN(int isbn) {
        this->isbn = isbn;
    }
    int getISBN(void) { return this->isbn; }
    //Status
    void setStatus(string status) {
        this->status = status;
    }
    string getStatus(void) { return this->status; }
    //strings
    string toString() {
        string numpagstr = "";
        numpagstr = to_string(this->numpags);

        string edicionstr = "";
        edicionstr = to_string(this->edicion);

        string ISBNstr = "";
        ISBNstr = to_string(this->isbn);
        
        string str = (" Titulo: " + this->title + "\n" + " Autor: " + this->autor + "\n" + " Editorial: " + this->editoral + "\n" + " Numero de paginas: " + numpagstr + "\n" + " Edicion: " + edicionstr + "\n" + " ISBN: " + ISBNstr + "\n" + " Status: " + this->status);
        return str;
    }
};

int main()
{
    cout << "Book 1" << endl;
    Book b1("Runnear","chems","socrates",7,5886,966,"leido" );
    cout << b1.toString() << endl;
    cout << endl;
    cout << "Book 2" << endl;
    Book b2("LOO", "Don", "UAM", 600, 2021, 467846, "En Proceso..");
    cout << b2.toString() << endl;
}
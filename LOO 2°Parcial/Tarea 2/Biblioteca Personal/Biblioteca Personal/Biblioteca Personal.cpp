#include <iostream>
#include "Book.h"
#include "Magazine.h"
#include "Biblioteca.h"

int main()
{
	int  ci, year, volumen;
	string title, autor, editorial;
	Biblioteca h1(3, 2);
    for (int i = 0; i < h1.getTamLib(); i++) {
		//Book b1("Chems Ronaldo", "Alfaguara", "Aprende a programar", 86064, 2009);
        //Book b2("Chems Ronaldo", "Alfaguara", "Aprende a programar", 86064, 2009);
        //Book b3("Chems Ronaldo", "Alfaguara", "Aprende a programar", 86064, 2009);
        h1.setlibros(i, "Chems Ronaldo", "Alfaguara", "Aprende a programar", 86064, 2009);
        //h1.setlibros(i, autor, editorial, title, ci, year);
    }
    cout << endl;
    for (int i = 0; i < h1.getTamRev(); i++) {
        //Magazine m1("Aprende a programar", 86064, 2009, 165);
        //Magazine m2("Aprende a programar", 86064, 2009, 165);
        h1.setrevistas(i, "Aprende a programar", 86064, 2009, 165);
        //h1.setrevistas(i, title, ci, year, volumen);
    }
    h1.ShowCatalog();
}

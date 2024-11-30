using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Clase_Book_C_Sharp
{
    class Clase_Book_C
    {
        private int numpags, edicion, isbn;
        private String title, autor, editoral, status;

        public Clase_Book_C()
        {
            this.title = "*Sin informacion previa*";
            this.autor = "*Sin informacion previa*";
            this.editoral = "*Sin informacion previa*";
            this.numpags = 0;
            this.edicion = 0;
            this.isbn = 0;
            this.status = "*Sin informacion previa*";
        }
        public Clase_Book_C(string title, string autor, string editoral, int numpags, int edicion, int isbn, string status)
        {
            this.SetTitle(title);
            this.SetAutor(autor);
            this.SetEditorial(editoral);
            this.SetNumpags(numpags);
            this.SetEdicion(edicion);
            this.SetISBN(isbn);
            this.SetStatus(status);
        }
        public void SetTitle (String title)
        {
            this.title = title;
        }
        //string getTitle() { return this.title; }
        public void SetAutor(String autor)
        {
            this.autor = autor;
        }
        public void SetEditorial(String editoral)
        {
            this.editoral = editoral;
        }
        public void SetNumpags(int numpags)
        {
            this.numpags = numpags;
        }
        public void SetEdicion(int edicion)
        {
            this.edicion = edicion;
        }
        public void SetISBN(int isbn)
        {
            this.isbn = isbn;
        }
        public void SetStatus(String status)
        {
            this.status = status;
        }
        public string toString()
        {
            string str;
            string numpagstr = "";
            numpagstr = str (this.numpags);

            string edicionstr = "";
            edicionstr = str (this.edicion);

            string ISBNstr = "";
            ISBNstr = str (this.isbn);
            str = (" Titulo: " + this.title + "\n" + " Autor: " + this.autor + "\n" + " Editorial: " + this.editoral + "\n" + " Numero de paginas: " + numpagstr + "\n" + " Edicion: " + edicionstr + "\n" + " ISBN: " + ISBNstr + "\n" + " Status: " + this.status);
            return str;
        }
    }
}

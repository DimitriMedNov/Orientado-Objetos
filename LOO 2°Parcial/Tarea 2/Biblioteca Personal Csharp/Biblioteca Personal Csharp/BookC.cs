using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Biblioteca_Personal_Csharp
{
    class BookC : CaracteristicasC
    {
        protected String autor, editorial;
        public BookC() : base ()
        {
            this.autor = "";
            this.editorial = "";
        }
        public BookC(String autor, String editorial, String title, int ci, int year) : base (title, ci, year)
        {
            this.autor = autor;
            this.editorial = editorial;
        }
        public String Autor
        {
            get { return this.autor; }
            set { this.autor = value; }
        }
        public String Editorial
        {
            get { return this.editorial; }
            set { this.editorial = value; }
        }
        public void setLibro(String autor, String editorial, String title, int ci, int year)
        {
            this.autor = autor;
            this.editorial = editorial;
            this.title = title;
            this.ci = ci;
            this.year = year;
        }
            public void showDetails()
        {
            base.imprimir();
            Console.Write("\nAutor: " + this.autor + "\nEditorial: " + this.editorial);
        }
    }
}

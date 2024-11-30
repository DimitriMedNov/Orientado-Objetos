using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Biblioteca_Personal_Csharp
{
    class Biblioteca
    {
        private BookC[] books;
        private MagazineC[] magazines;
        protected int tamLibro, tamRevista;

        public Biblioteca(int tamLibros, int tamRevistas)
        {
            this.tamLibro = tamLibros > 0 ? tamLibros : 1;
            this.tamRevista = tamRevistas > 0 ? tamRevistas : 1;
            this.books = new BookC[this.tamLibro];
            this.magazines = new MagazineC[this.tamRevista];
        }
        public int GettamLibro
        {
            get { return this.tamLibro; }
        }
        public int GettamRevista
        {
            get { return this.tamRevista; }
        }
        public void setlibros(int indx, String autor, String editorial, String title, int ci, int year)
        {
            this.books[indx].setLibro(autor, editorial, title, ci, year);
        }
        public void setrevistas(int indx, String title, int ci, int year, int volumen)
        {
            this.magazines[indx].setRevista(title, ci, year, volumen);
        }
        public void ShowCatalog()
        {
            Console.WriteLine("-------------- Inventario -------------------");
            Console.WriteLine("**************** Boook *********************");
            for (int i = 0; i < tamLibro; i++)
            {
                Console.WriteLine("Libro: " + i + 1);
                this.books[i].showDetails();
            }
            Console.WriteLine("");
            Console.WriteLine("**************** Magazine *********************");
            for (int i = 0; i < tamRevista; i++)
            {
                Console.WriteLine("Revista: " + i + 1);
                this.magazines[i].showDetails();
            }
        }
    }
}

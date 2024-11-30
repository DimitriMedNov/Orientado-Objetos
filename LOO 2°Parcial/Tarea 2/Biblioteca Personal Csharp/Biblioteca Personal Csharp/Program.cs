using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Biblioteca_Personal_Csharp
{
    class Program
    {
        static void Main(string[] args)
        {
            int ci, year, volumen;
            String title, autor, editorial;

            //BookC b1 = new BookC("Chems Ronaldo", "Alfaguara", "Aprende a programar", 86064, 2009);
            //MagazineC m1 = new MagazineC("Aprende a programar", 86064, 2009, 165);

            Biblioteca h1 = new Biblioteca(3, 2);
            for (int i = 0; i < h1.GettamLibro(); i++)
            {
                //Book b1= new Book("Chems Ronaldo", "Alfaguara", "Aprende a programar", 86064, 2009);
                //Book b2= new Book("Chems Ronaldo", "Alfaguara", "Aprende a programar", 86064, 2009);
                //Book b3= new Book("Chems Ronaldo", "Alfaguara", "Aprende a programar", 86064, 2009);
                h1.setlibros(i, "Chems Ronaldo", "Alfaguara", "Aprende a programar", 86064, 2009);
                //h1.setlibros(i, autor, editorial, title, ci, year);
            }
            Console.WriteLine("");
            for (int i = 0; i < h1.getTamRev(); i++)
            {
                //Magazine m1("Aprende a programar", 86064, 2009, 165);
                //Magazine m2("Aprende a programar", 86064, 2009, 165);
                h1.setrevistas(i, "Aprende a programar", 86064, 2009, 165);
                //h1.setrevistas(i, title, ci, year, volumen);
            }
            h1.ShowCatalog();

            /*Console.WriteLine("********** Book ************");
            b1.showDetails();
            Console.WriteLine("\n******** Magazine *********");
            m1.showDetails();
            Console.ReadLine();*/
        }
    }
}

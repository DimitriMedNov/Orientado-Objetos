using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Clase_Book_C_Sharp
{
    static class Program
    {
        static void Main()
        {
            System.Console.WriteLine("Book 1" + "\n");
            Clase_Book_C b1 = new Clase_Book_C();
            System.Console.WriteLine("Book 1: " + b1.toString() + "\n");
            System.Console.WriteLine("\n");
            System.Console.WriteLine("Book 2" + "\n");
            Clase_Book_C b2 = new Clase_Book_C("LOO", "Don", "UAM", 600, 2021, 467846, "En Proceso..");
            System.Console.WriteLine("Book 2: " + b2.toString() + "\n");

        }
    }
}

using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Poliformismo_Shape_csharp
{
    class Program
    {
        static void Main(string[] args)
        {
            Cilindro A = new Cilindro(5, -3.2, 4.84);
            double ar = A.calcularea();
            double vol = A.calcularvolumen();
            String nom = A.shapename();
            
            Console.WriteLine("Area del cilindro: " + ar);
            Console.WriteLine("Volumen del cilindro: " + vol);
            Console.WriteLine ("Nombre de la figura: " + nom);
            Console.WriteLine("");

            Circulo B = new Circulo(0, 1, 5);
            double ar2 = B.calcularea();
            double per = B.calcularperimetro();
            string nom2 = B.shapename();

            Console.WriteLine("Area del cilindro: " + ar2);
            Console.WriteLine("Volumen del cilindro: " + per);
            Console.WriteLine("Nombre de la figura: " + nom2);
            Console.WriteLine("");

            Punto2d C = new Punto2d(-5, 0.12);
            string nom3 = C.shapename();
            Console.WriteLine("Nombre de la figura: " + nom3);
        }
    }
}

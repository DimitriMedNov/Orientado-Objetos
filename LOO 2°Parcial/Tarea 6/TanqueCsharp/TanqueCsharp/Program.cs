using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace TanqueCsharp
{
    class Program
    {
        static void Main(string[] args)
        {
            double cargaMore, cargaLess;

            Tanque t = new Tanque(100, 3, "Gasolina");

            while (t.CargaActual< t.Capacidad)
            {
                Console.WriteLine("\nCuanto desea agregar al tanque? ");
                cargaMore = Convert.ToInt32(Console.ReadLine());
                t.AgregarCarga(cargaMore);
            }
            while (t.CargaActual > 0)
            {
                Console.WriteLine("Cuanto desea retirar del tanque?" );
                cargaLess = Convert.ToInt32(Console.ReadLine());
                t.RetirarCarga(cargaLess);
                
            }
            Console.ReadLine();
        }
    }
}

using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Clase_Vcetor
{
    class Program
    {
        static void Main(string[] args)
        {
            Vector p1 = new Vector(3.45f, 8.9f);
            Vector p2 = new Vector(3.45f, 8.9f);
            Vector p3 = new Vector(3.45f, 8.9f);
            Vector p4 = new Vector(3.45f, 8.9f);
            System.Console.WriteLine("ES TODO LO QUE PUDE HACER PROF :( ");
            System.Console.WriteLine("X, Y sin valores: ");
            p1.imprimir();
            System.Console.WriteLine("");
            System.Console.WriteLine("X, Y se encuentran en: ");
            p2.imprimir();
            
            double dx, dy;
            double mx, my;
            double qx, qy;
            System.Console.WriteLine("SUMA");
            System.Console.WriteLine("Cuanto le quieres sumar a x? ");
            dx = Convert.ToDouble(Console.ReadLine());
            System.Console.WriteLine("Cuanto le quieres sumar a y? ");
            dy = Convert.ToDouble(Console.ReadLine());
            System.Console.WriteLine("RESTA");
            System.Console.WriteLine("Cuanto le quieres restar a x? ");
            mx = Convert.ToDouble(Console.ReadLine());
            System.Console.WriteLine("Cuanto le quieres restar a y? ");
            my = Convert.ToDouble(Console.ReadLine());
            System.Console.WriteLine("MULTIPLICACION");
            System.Console.WriteLine("Cuanto le quieres multiplicar a x? ");
            qx = Convert.ToDouble(Console.ReadLine());
            System.Console.WriteLine("Cuanto le quieres multiplicar a y? ");
            qy = Convert.ToDouble(Console.ReadLine());

            System.Console.WriteLine("RESTA");
            System.Console.WriteLine("Ahora X, Y se restaron y se movieron ha: ");
            p2.resta(mx, my);
            p2.imprimir();
            System.Console.WriteLine("SUMA");
            System.Console.WriteLine("Ahora X, Y se sumaron y se movieron ha: ");
            p3.sumar(dx, dy);
            p3.imprimir();
            System.Console.WriteLine("MULTIPLICACION");
            System.Console.WriteLine("Ahora X, Y se multiplicaron y se movieron ha: ");
            p4.multi(qx, qy);
            p4.imprimir();

            p1.magnitud(3.45f, 8.9f);
            p1.hx(3.45f);
            Console.ReadLine();

        }
    }
}

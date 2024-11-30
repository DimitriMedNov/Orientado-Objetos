using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace CLASS_POINT3D
{
    class Program
    {
        static void Main(string[] args)
        {
            Point3DC p1 = new Point3DC();
            Point3DC p2 = new Point3DC(3.45f, 8.9f, 8.36f);
            System.Console.WriteLine("X, Y, Z sin valores: ");
            p1.imprimir();
            System.Console.WriteLine("");
            System.Console.WriteLine("X, Y, Z se encuentran en: ");
            p2.imprimir();
            //Console.ReadLine();
            double dx, dy, dz;
            double ax, ay, az;
            System.Console.WriteLine("Cuanto quieres de desplazamineto en x? ");
            dx = Convert.ToDouble(Console.ReadLine());
            System.Console.WriteLine("Cuanto quieres de desplazamineto en y? ");
            dy = Convert.ToDouble(Console.ReadLine());
            System.Console.WriteLine("Cuanto quieres de desplazamineto en z? ");
            dz = Convert.ToDouble(Console.ReadLine());
            System.Console.WriteLine("Cual es el angulo de x? ");
            ax = Convert.ToDouble(Console.ReadLine());
            System.Console.WriteLine("Cual es el angulo de y? ");
            ay = Convert.ToDouble(Console.ReadLine());
            System.Console.WriteLine("Cual es el angulo de z? ");
            az = Convert.ToDouble(Console.ReadLine());
            System.Console.WriteLine("");
            p2.transladar(dx, dy, dz);
            System.Console.WriteLine("");
            p2.angulos(ax, ay, az);
            System.Console.WriteLine("Ahora X, Y, Z se desplazaron ha: ");
            p2.imprimir();
            System.Console.WriteLine("X, Y, Z se rotaron ha: ");
            p2.printRotacion();
            //Prof no se porque no me jalo los resultados de la rotacion ):
            Console.ReadLine();
        }
    }
}

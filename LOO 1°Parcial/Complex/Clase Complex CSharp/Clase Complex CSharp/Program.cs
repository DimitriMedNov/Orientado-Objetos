using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Clase_Complex_CSharp
{
    static class Program
    {
        static void Main()
        {
            Clase_Complex_C A = new Clase_Complex_C();
            Clase_Complex_C B = new Clase_Complex_C(-3.0f, 5.49f);
            Clase_Complex_C C = new Clase_Complex_C(7.24f, -1f);
            System.Console.WriteLine("Numero n1: " + A.toString() + "\n");
            System.Console.WriteLine("Numero n2: " + B.toString() + "\n");
            System.Console.WriteLine("Numero n3: " + C.toString() + "\n");
            A = B.conjugate();
            System.Console.WriteLine("Numero n1: " + A.toString() + "\n");
            System.Console.WriteLine("Modulo de n2: " + B.toString() + "\n");
            System.Console.WriteLine("Modulo de n3: " + C.toString() + "\n");
            A.add(B, C);
            System.Console.WriteLine("suma (" + B.toString() + ") + (" + C.toString() + ") = " + A.toString() + "\n");
            A.subs(B, C);
            System.Console.WriteLine("resta (" + B.toString() + ") - (" + C.toString() + ") = " + A.toString() + "\n");
            A.mult(B, C);
            System.Console.WriteLine("multiplicacion (" + B.toString() + ") - (" + C.toString() + ") = " + A.toString() + "\n");
            A.div(B, C);
            System.Console.WriteLine("division (" + B.toString() + ") - (" + C.toString() + ") = " + A.toString() + "\n");
            Console.ReadLine();
        }
    }
}

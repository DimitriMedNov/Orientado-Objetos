using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace PersonCSharp
{
    class Program
    {
        static void Main(string[] args)
        {
            Persona p1 = new Persona("Leonel", "Messi", 33, 24, 6, 1987);
            Console.WriteLine("************ PERSON ***************");
            p1.imprimir();

            Student s1 = new Student("Cristiano", "Ronaldo", 36, 5, 2, 1985,"Delantero de la Juve",8,10);
            Console.WriteLine("\n************ STUDENT ***************");
            s1.imprimir();
            Course c1 = new Course("Lenguaje Orientado a Objetos", "SIS1402", 6);
            Teacher t1 = new Teacher("Zinedine","Zidane",48,23,6,1972,"Doctorado","Tiempo Completo",c1);
            Console.WriteLine("\n************ TEACHER ***************");
            t1.imprimir();
            Console.ReadLine();
        }
    }
}

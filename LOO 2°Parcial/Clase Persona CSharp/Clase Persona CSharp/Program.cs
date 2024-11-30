using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Clase_Persona_CSharp
{
    class Program
    {
        static void Main(string[] args)
        {
            CPersona p1 = new CPersona("JUAN", "PEREZ", 21);
            CEmpleado e1 = new CEmpleado("Antonio", "Rodriguez", 30, "Jefe dedepartamento", 45800);
            Console.WriteLine("************ PERSONA ***************");
            p1.imprimir();
            Console.WriteLine("\n\n************ EMPLEADO ***************");
            e1.imprimir();
            Console.WriteLine();
            Console.ReadLine();
        }
    }
}

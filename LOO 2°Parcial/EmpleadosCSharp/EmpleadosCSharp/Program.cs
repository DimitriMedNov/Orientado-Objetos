using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace EmpleadosCSharp
{
    class Program
    {
        static void Main(string[] args)
        {
            Jefe jefe1 = new Jefe("Juan Perez", 40000);
            TrabajadorComision trabajador1 = new TrabajadorComision("Felipe Rodriguez", 5000, 0.3, 10000);
            EmpleadoPiezas empleado1 = new EmpleadoPiezas("Fulano de Tal", 8000, 50);
            TrabajadorPorHoras empleado2  = new TrabajadorPorHoras("Rodolfo", 68, 150);
            //mostramos que funciona con cada objeto
            Console.WriteLine("************* PROBANDO CON OBJETOS *************");
            jefe1.imprimir();
            trabajador1.imprimir();
            empleado1.imprimir();
            empleado2.imprimir();
            //Ahora checamos comportamiento polimórfico
            Console.WriteLine("************* PROBANDO POLIMORFISMO *************");
            Empleado empleado;
            empleado = jefe1;
            empleado.imprimir();
            empleado = trabajador1;
            empleado.imprimir();
            empleado = empleado1;
            empleado.imprimir();
            empleado = empleado2;
            empleado.imprimir();
            Console.ReadLine();
        }
    }
}

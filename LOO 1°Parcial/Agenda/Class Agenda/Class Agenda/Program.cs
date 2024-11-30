using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Class_Agenda
{
    class Program
    {
        static void Main(string[] args)
        {
            //Clase person
            AgendaC p1 = new AgendaC();
            System.Console.WriteLine("Persona 1: ");
            p1.imprimir();

            AgendaC p2 = new AgendaC();
            String nombre, apellido, correo;
            System.Console.WriteLine("Cual es el nombre de la persona? ");
            nombre = Console.ReadLine();
            System.Console.WriteLine("Cuales son sus apellidos? ");
            apellido = Console.ReadLine();
            System.Console.WriteLine("Cual es su correo? ");
            correo = Console.ReadLine();
            System.Console.WriteLine("");
            System.Console.WriteLine("Persona 2: ");
            p2.persona(nombre, apellido, correo);
            p2.imprimir();
            System.Console.WriteLine("");
            //Clase Person

            //Clase Meeting
            MeetingC m1 = new MeetingC();
            System.Console.WriteLine("Meeting 1: ");
            m1.imprimir2();


            MeetingC m2 = new MeetingC();
            double dia, mes, año, numero, hora, minutos;
            System.Console.WriteLine("");
            System.Console.WriteLine("Que dia se veran? ");
            dia = Convert.ToDouble(Console.ReadLine());
            System.Console.WriteLine("En que mes se veran? ");
            mes = Convert.ToDouble(Console.ReadLine());
            System.Console.WriteLine("De que año? ");
            año = Convert.ToDouble(Console.ReadLine());
            System.Console.WriteLine("Cual es el numero su numero? ");
            numero = Convert.ToDouble(Console.ReadLine());
            System.Console.WriteLine("Esta parte coloque solamente la hora sin los minutos ya sea en formato 24 o 12 hrs");
            System.Console.WriteLine("A que hora? ");
            hora = Convert.ToDouble(Console.ReadLine());
            System.Console.WriteLine("Especifique los minutos? ");
            minutos = Convert.ToDouble(Console.ReadLine());
            m2.cita(dia, mes, año, numero, hora, minutos);
            System.Console.WriteLine("");
            System.Console.WriteLine("Meeting 2");
            m2.imprimir2();
            Console.ReadLine();

        }
    }
}

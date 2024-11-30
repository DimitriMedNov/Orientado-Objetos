using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Simulador_de_Vehiculos_CSharp
{
    class Program
    {
        static void Main(string[] args)
        {
            Auto auto = new Auto("niav7af5",20,5);
            auto.toString();
            auto.print();
            auto.acelerar(80);
            auto.print();
            auto.frenar(90);
            auto.print();
            //Camion camion = new Camion("niav7af5", 20);

            Console.ReadLine();
        }
    }
}

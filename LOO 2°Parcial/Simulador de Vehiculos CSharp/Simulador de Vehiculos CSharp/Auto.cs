using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Simulador_de_Vehiculos_CSharp
{
    class Auto : Vehiculo
    {
        protected int puertas;
        public Auto(String matricula, float velocidad, int puertas) : base( matricula, velocidad)
        {
            this.puertas = puertas;
        }
        public int Puertas
        {
            set { this.puertas = value > 0 ? value : 1; }
        }
        public override void acelerar(float cantidad)
        {
            try
            {
                this.velocidad += cantidad;
                if (this.velocidad > 200)
                {
                    throw new DemasiadoRapidoException();
                }
            }
            catch (DemasiadoRapidoException e)
            {
                Console.WriteLine(e.toString());
            }
            finally
            {
                Console.WriteLine(" ");
            }
        }
        public override void frenar(float cantidad)
        {
            try
            {
                this.velocidad -= cantidad;
                if (velocidad <= 0)
                {
                    throw new VehiculoDetenidoException();
                }
            }
            catch (VehiculoDetenidoException e)
            {
                Console.WriteLine(e.toString());
            }
            finally
            {
                Console.WriteLine(" ");
            }
        }
        public override String toString()
        {
            String msj;
            msj = ("\nAUTO" + "\nMatricula: " + this.matricula + "\nVelocidad actual: " + this.velocidad);
            return msj; //("\nAUTO" + "\nMatricula: " + this.matricula + "\nVelocidad actual: " + this.velocidad);
        }
        public void print()
        {
            Console.WriteLine("\nAUTO" + "\nMatricula: " + this.matricula + "\nVelocidad actual: " + this.velocidad);
        }
    }
}


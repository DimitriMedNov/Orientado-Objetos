using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Simulador_de_Vehiculos_CSharp
{
    class Camion : Vehiculo
    {
        public Remolque r;
        Camion(String matricula, float velocidad) :base(matricula,velocidad)
        {
            //super(matricula);
            this.r = null;
        }
        void ponerRemolque(Remolque r)
        {
            this.r = r;
        }
        void quitarRemolque()
        {
            this.r = null;
        }
        public override void acelerar(float cantidad)
        {
            try
            {
                this.velocidad += cantidad;
                if (this.r != null && this.velocidad > 90)
                {
                    throw new DemasiadoRapidoException();
                }
                else if (this.velocidad > 110)
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
                if (velocidad <= 0)
                {
                    throw new VehiculoDetenidoException();
                }
                this.velocidad -= cantidad;
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

            return (this.r == null ? "\n///CAMION/// \nMatricula: " : "\n///CAMION CON REMOLQUE/// \nMatricula: ") + this.matricula + "\nVelocidad actual: " + this.velocidad + (this.r != null ? this.r.ToString() : " ");
        }
    }
}

using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Simulador_de_Vehiculos_CSharp
{
    class DemasiadoRapidoException : Exception
    {
        public DemasiadoRapidoException() :base ("\nEl vehiculo llego a su velociad maxima.")
        {
            //("\nEl vehiculo llego a su velociad maxima.");
        }

        //@Override
        public String toString()
        {
            return base.ToString();
        }
    }
}

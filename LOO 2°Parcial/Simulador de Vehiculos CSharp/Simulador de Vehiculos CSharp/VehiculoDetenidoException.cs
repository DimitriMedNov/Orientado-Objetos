using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Simulador_de_Vehiculos_CSharp
{
    class VehiculoDetenidoException : Exception
    {
        public VehiculoDetenidoException() : base("\nEl vehiculo ya esta detenido.")
        {

        }
        public String toString()
        {
            return base.ToString();
        }
    }
}

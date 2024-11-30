using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Simulador_de_Vehiculos_CSharp
{
    class ValorInvalidoException : Exception
    {
        public ValorInvalidoException() : base("\nValor no valido para modificar la velocidad, por favor ingrese un valor positivo.")
        {

        }
        public String toString()
        {
            return base.ToString();
        }
    }
}

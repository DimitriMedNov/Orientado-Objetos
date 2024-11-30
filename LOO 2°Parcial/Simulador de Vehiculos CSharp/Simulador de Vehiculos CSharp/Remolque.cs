using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Simulador_de_Vehiculos_CSharp
{
    class Remolque 
    {
        protected double pMax, alto, ancho, largo;
        Remolque(double pMax, double alto, double ancho, double largo)
        {
            this.pMax = pMax;
            this.alto = alto;
            this.ancho = ancho;
            this.largo = largo;
        }
        /*public override String toString()
        {
            return ("\nRemolque" + "\nAltura: " + this.alto + "\nAncho: " + this.ancho+ "\nLargo: " + this.largo+ "\nPeso maximo" + this.pMax);
        }*/
    }
}

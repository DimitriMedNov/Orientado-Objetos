using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Poliformismo_Shape_csharp
{
    class Cilindro : Circulo
    {
        protected double altura;

        public Cilindro()
        {
            this.x = 0;
            this.y = 0;
            this.altura = 1;
        }

        public Cilindro(double x, double y, double altura)
        {
            this.x = x;
            this.y = y;
            this.altura = altura;
        }

        public override string shapename()
        {
            return "Cilindro";
        }

        public override double calcularea()
        {
            return base.calcularea() * 2 + this.altura * base.calcularea();
        }

        public override double calcularperimetro()
        {
            return 0;
        }

        public override double calcularvolumen()
        {
            return this.altura * base.calcularvolumen();
        }
    }
}

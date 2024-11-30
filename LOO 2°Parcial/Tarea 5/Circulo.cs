using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Poliformismo_Shape_csharp
{
    class Circulo : Punto2d
    {
        protected double radio;

        public Circulo()
        {
            this.x = 0;
            this.y = 0;
            this.radio = 0;
        }

        public Circulo(double x, double y, double radio) : base(x, y)
        {
            this.radio = radio > 0 ? radio : 1;
        }

        public override string shapename()
        {
            return "Circulo";
        }

        public override double calcularea()
        {
            return this.radio * this.radio * 3.1416;
        }

        public override double calcularperimetro()
        {
            return this.radio * 2 * 3.1416;
        }

        public override double calcularvolumen()
        {
            return 0;
        }
    }
}

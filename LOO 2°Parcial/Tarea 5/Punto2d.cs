using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Poliformismo_Shape_csharp
{
    class Punto2d : Shape
    {
        protected double x, y;

        public Punto2d() : base()
        {
            this.x = 0;
            this.y = 0;
        }

        public Punto2d(double x, double y) : base()
        {
            this.x = x;
            this.y = y;
        }

        public override double calcularea()
        {
            return 0;
        }

        public override double calcularperimetro()
        {
            return 0;
        }

        public override double calcularvolumen()
        {
            return 0;
        }

        public override string shapename()
        {
            return "Punto en 2D";
        }

    }
}

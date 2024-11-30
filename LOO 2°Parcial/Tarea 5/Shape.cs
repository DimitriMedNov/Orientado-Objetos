using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Poliformismo_Shape_csharp
{
    public abstract class Shape
    {
        public abstract string shapename();
        public abstract double calcularea();
        public abstract double calcularperimetro ();
        public abstract double calcularvolumen();
    }
}

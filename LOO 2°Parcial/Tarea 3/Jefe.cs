using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace EmpleadosCSharp
{
    class Jefe : Empleado
    {
        protected double salarioSemanal;
        public Jefe() : base()
        {
            this.salarioSemanal = 0;
        }
        public Jefe(String nombre, double salario) : base(nombre)
        {
            this.salarioSemanal = salario > 0 ? salario : 0;
        }
        public double SalarioSemanal
        {
            set { this.salarioSemanal = value > 0 ? value : 0; }
            get { return this.salarioSemanal; }
        }
        public override double pagoDiario()
        {
            return this.salarioSemanal / 5;
        }
        public override void imprimir()
        {
            Console.WriteLine("Empleado tipo JEFE");
            Console.WriteLine("NOMBRE: " + this.nombre + "\nSALARIO SEMANAL: " + this.salarioSemanal + "\nPAGO DIARIO: " + this.pagoDiario());
        }
    }
}
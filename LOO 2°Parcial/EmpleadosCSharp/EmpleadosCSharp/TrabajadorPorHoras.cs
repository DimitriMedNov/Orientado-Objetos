using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace EmpleadosCSharp
{
    class TrabajadorPorHoras : Empleado
    {
        protected int HorasTrabajadas;
        protected double pagoXhora;
        public TrabajadorPorHoras() : base()
        {
            this.HorasTrabajadas = 0;
            this.pagoXhora = 0;
        }
        public TrabajadorPorHoras(String nombre, int cantidad, double pago) : base(nombre)
        {
            this.HorasTrabajadas = cantidad > 0 ? cantidad : 0;
            this.pagoXhora = pago > 0 ? pago : 0;
        }
        public int HrsTrabajadas
        {
            set { this.HorasTrabajadas = value > 0 ? value : 0; }
            get { return this.HorasTrabajadas; }
        }
        public double PagoxHora
        {
            set { this.pagoXhora = value > 0 ? value : 0; }
            get { return this.pagoXhora; }
        }
        public override double pagoDiario()
        {
            return this.HorasTrabajadas * this.pagoXhora;
        }
        public override void imprimir()
        {
            Console.WriteLine("Empleado tipo Trabajador por horas");
            Console.WriteLine("NOMBRE: " + this.nombre + "\nPAGO POR HORA: " + this.pagoXhora + "\nCANTIDAD HORAS TRABAJADAS: " + this.HorasTrabajadas + "\nPAGO DIARIO: " + this.pagoDiario());
        }
    }
}

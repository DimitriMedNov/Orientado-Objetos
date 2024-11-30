using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace EmpleadosCSharp
{
    class EmpleadoPiezas : Empleado
    {
        protected int cantidadPiezas;
        protected double pagoXPieza;
        public EmpleadoPiezas() : base()
        {
            this.cantidadPiezas = 0;
            this.pagoXPieza = 0;
        }
        public EmpleadoPiezas(String nombre, int cantidad, double pago) : base(nombre)
        {
            this.cantidadPiezas = cantidad > 0 ? cantidad : 0;
            this.pagoXPieza = pago > 0 ? pago : 0;
        }
        public int CantidadPiezas
        {
            set { this.cantidadPiezas = value > 0 ? value : 0; }
            get { return this.cantidadPiezas; }
        }
        public double PagoXPieza
        {
            set { this.pagoXPieza = value > 0 ? value : 0; }
            get { return this.pagoXPieza; }
        }
        public override double pagoDiario()
        {
            return this.cantidadPiezas * this.pagoXPieza;
        }
        public override void imprimir()
        {
            Console.WriteLine("Empleado tipo TRABAJADOR POR PIEZAS");
            Console.WriteLine("NOMBRE: " + this.nombre + "\nPAGO POR PIEZA: " + this.pagoXPieza + "\nCANTIDAD PIEZAS HECHAS: " + this.cantidadPiezas + "\nPAGO DIARIO: " + this.pagoDiario());
        }
    }
}
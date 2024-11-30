using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace EmpleadosCSharp
{
    class TrabajadorComision : Empleado
    {
        protected double salarioBase, porcentajeComision, montoVentas;
        public TrabajadorComision() : base()
        {
            this.salarioBase = 0;
            this.porcentajeComision = 0;
            this.montoVentas = 0;
        }
        public TrabajadorComision(String nombre, double salario, double comision, double ventas) : base(nombre)
        {
            this.salarioBase = salario > 0 ? salario : 0;
            this.porcentajeComision = comision >= 0 && comision <= 1 ? comision : 0;
            this.montoVentas = ventas > 0 ? ventas : 0;
        }
        public double SalarioBase
        {
            set { this.salarioBase = value > 0 ? value : 0; }
            get { return this.salarioBase; }
        }
        public double PorcentajeComision
        {
            set { this.porcentajeComision = value >= 0 && value <= 1 ? value : 0; }
            get { return this.porcentajeComision; }
        }
        public double MontoVentas
        {
            set { this.montoVentas = value > 0 ? value : 0; }
            get { return this.montoVentas; }
        }
        public override double pagoDiario()
        {
            return this.salarioBase + this.porcentajeComision * this.montoVentas;
        }
        public override void imprimir()
        {
            Console.WriteLine("Empleado tipo TRABAJADOR POR COMISIÓN");
            Console.WriteLine("NOMBRE: " + this.nombre + "\nSALARIO BASE: " + this.salarioBase + "\nPORCENTAJE COMISIÓN: " + this.porcentajeComision * 100 + "\nMONTO VENTAS: " + this.montoVentas + "\nPAGO DIARIO: " + this.pagoDiario());
        }
    }
}
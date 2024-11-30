using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace EmpleadosCSharp
{
    abstract class Empleado
    {
        protected String nombre;
        public String Nombre
        {
            set { this.nombre = value; }
            get { return this.nombre; }
        }
        public Empleado()
        {
            this.nombre = "";
        }
        public Empleado(String nombre)
        {
            this.nombre = nombre;
        }
        public abstract double pagoDiario();
        public abstract void imprimir();
    }
}
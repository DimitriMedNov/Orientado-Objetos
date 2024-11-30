using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Clase_Persona_CSharp
{
    class CEmpleado : CPersona
    {
        protected String puesto;
        protected double salario;
        public CEmpleado(String nombre, String apellido, int edad, String puesto , double salario) : base ( nombre,  apellido,  edad)
        {
            this.puesto = puesto;
            this.salario = salario < 0 ? 0 : salario;
        }
        public String Puesto
        {
            set { this.puesto = value; }
            get { return this.puesto; }
        }

        public double Salario
        {
            set { this.salario = value; }
            get { return this.salario; }
        }
        public void imprimir()
        {
            base.imprimir();
            Console.Write("\nPUESTO: " + this.puesto + "\nSALARIO: " + this.salario + "\n");
        }
    }
}

using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Clase_Persona_CSharp
{
    class CPersona
    {
        protected String nombre, apellido;
        protected int edad;
        public CPersona(String nombre, String apellido, int edad)
        {
            this.nombre = nombre;
            this.apellido = apellido;
            this.edad = edad < 0 ? 0 : edad;
        }
        public String Nombre
        {
            get { return this.nombre; }
            set {this.nombre = value; }
        }
        public String Apellido
        {
            get { return this.apellido; }
            set { this.apellido = value; }
        }
        public int Edad
        {
            get { return this.edad; }
            set { this.edad = value < 0 ? 0 : value; }
        }
        public void imprimir()
        {
            System.Console.Write("NOMBRE: " + this.nombre + "\nAPELLIDO: " + this.apellido);
            System.Console.Write("\nEDAD: " +  this.edad);
        }
    }
}

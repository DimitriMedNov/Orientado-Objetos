using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace PersonCSharp
{
    class Student : Persona
    {
        protected String nombre2;
        protected int semestre;
        protected double promedio;
        public Student(String nombre, String apellido, int edad, int day, int month, int year, String nombre2, int semestre, double promedio) : base(nombre, apellido, edad, day, month, year)
        {
            this.nombre2 = nombre2;
            this.semestre = semestre < 0 ? 0 : semestre;
            this.promedio = promedio < 0 ? 0 : promedio;
        }
        public String Nombre2
        {
            set { this.nombre2 = value; }
            get { return this.nombre2; }
        }
        public int Semestre
        {
            set { this.semestre = value; }
            get { return this.semestre; }
        }
        public double Promedio
        {
            set { this.promedio = value; }
            get { return this.promedio; }
        }
        public void imprimir()
        {
            base.imprimir();
            Console.Write("\nCARRERA: " + this.nombre2 + "\nSEMESTRE: " + this.semestre + "\nPROMEDIO: " + this.promedio);
        }
    }
}

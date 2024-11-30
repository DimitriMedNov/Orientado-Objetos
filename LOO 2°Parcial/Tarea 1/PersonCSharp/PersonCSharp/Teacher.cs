using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace PersonCSharp
{
    class Teacher : Persona
    {
        protected String grade, type;
        private Course curso;
        public Teacher(String nombre, String apellido, int edad, int day, int month, int year, String grade, String type, Course curso) : base(nombre, apellido, edad, day, month, year)
        {
            this.grade = grade;
            this.type = type;
            this.curso = curso;
            //this.materia = materia;
        }
        public String Grade
        {
            set { this.grade = value; }
            get { return this.grade; }
        }
        public String Type
        {
            set { this.type = value; }
            get { return this.type; }
        }
        public Course Curso
        {
            set { this.curso = value; }
            get { return this.curso; }
        }
        public void imprimir()
        {
            base.imprimir();
            Console.Write("\nGRADO ACADEMICO: " + this.grade + "\nTIPO DE DOCENTE: " + this.type);
            this.curso.imprimir();
        }
    }
}

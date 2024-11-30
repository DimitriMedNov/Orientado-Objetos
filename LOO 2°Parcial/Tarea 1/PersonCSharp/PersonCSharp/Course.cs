using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace PersonCSharp
{
    class Course
    {
        protected String materia, nrc;
        protected int cr;
        public Course(String materia, String nrc, int cr)
        {
            this.materia = materia;
            this.nrc = nrc;
            this.cr = cr < 0 ? 0 : cr;
        }
        public String Materia
        {
            get { return this.materia; }
            set { this.materia = value; }
        }
        public String NRC
        {
            get { return this.nrc; }
            set { this.nrc = value; }
        }
        public int CR
        {
            get { return this.cr; }
            set { this.cr = value < 0 ? 0 : value; }
        }
        public void imprimir()
        {
            System.Console.Write("\nMateria: " + this.materia + "\nNRC: " + this.nrc + "\nCreditos: " + this.cr);

        }
    }
}

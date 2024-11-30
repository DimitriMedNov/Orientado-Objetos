using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Biblioteca_Personal_Csharp
{
    class CaracteristicasC
    {
        protected String title;
        protected int ci, year;
        public CaracteristicasC()
        {
            this.title = "";
            this.ci = 0;
            this.year = 0;
        }
        public CaracteristicasC(String title, int ci, int year)
        {
            this.title = title;
            this.ci = ci < 0 ? 0 : ci;
            this.year = year < 0 || year > 9999 ? 1900 : year;
        }
        public String Title
        {
            get { return this.title; }
            set { this.title = value; }
        }
        public int CI
        {
            get { return this.ci; }
            set { this.ci = value < 0 ? 0 : value; }
        }
        public int Year
        {
            get { return this.year; }
            set { this.year = value < 0 || value > 9999 ? 1900 : value; }
        }
        public void imprimir()
        {
            System.Console.Write("Titulo: " + this.title + "\nCodigo de identificacion: " + this.ci + "\nAnio de publicacion: " + this.year);

        }
    }
}

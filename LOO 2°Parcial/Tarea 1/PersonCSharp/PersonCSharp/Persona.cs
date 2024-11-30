using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace PersonCSharp
{
    class Persona
    {
        protected String nombre, apellido;
        protected int edad, day, month, year;
        public Persona(String nombre, String apellido, int edad, int day, int month, int year)
        {
            this.nombre = nombre;
            this.apellido = apellido;
            this.edad = edad < 0 ? 0 : edad;
            this.day = day < 0 || day >= 32 ? 1 : day;
            this.month = month < 0 || month >= 13 ? 1 : month;
            this.year = year < 0 || year > 9999 ? 1900 : year;
        }
        public String Nombre
        {
            get { return this.nombre; }
            set { this.nombre = value; }
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
        public int Day
        {
            get { return this.day; }
            //set { this.day = value < 0 || value >= 32 ? 1 : value; }
            set
            {
                if (this.month == 1 || this.month == 3 || this.month == 5 || this.month == 7 || this.month == 8 || this.month == 10 || this.month == 12)
                    this.day = value > 0 && value < 32 ? value : 1;
                else if (this.month == 4 || this.month == 6 || this.month == 9 || this.month == 11)
                    this.day = value > 0 && value < 31 ? value : 1;
                else if (year % 4 != 0 || year % 100 == 0 && year % 400 != 0) //año no bisiesto
                    this.day = value > 0 && value < 29 ? value : 1;
                else
                    this.day = value > 0 && value < 30 ? value : 1; //año bisiesto puede llegar a 29 de feb }
            }
        }
        public int Month
        {
            get { return this.month; }
            set { this.month = value < 0 || value >= 13 ? 1 : value; }
        }
        public int Year
        {
            get { return this.year; }
            set { this.year = value < 0 || value > 9999 ? 1900 : value; }
        }
        public void imprimir()
        {
            System.Console.Write("NOMBRE: " + this.nombre + "\nAPELLIDO: " + this.apellido + "\nEDAD: " + this.edad + "\nDATE: " + this.day + "/" + this.month+"/"+this.year);

        }
    }
}

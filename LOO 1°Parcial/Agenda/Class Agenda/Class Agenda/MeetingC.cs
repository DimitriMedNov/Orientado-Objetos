using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Class_Agenda
{
    class MeetingC
    {
        double day, month, year, number, h, m;
        public MeetingC()
        {
            this.day = 0;
            this.month = 0;
            this.year = 0000;
            this.h = 0;
            this.m = 0;
            this.number = 0;
        }
        public MeetingC(double day, double month, double year, double number, double h, double m)
        {
            this.day = day;
            this.month = month;
            this.year = year;
            this.number = number;
            this.h = h;
            this.m = m;
        }
        public void cita(double dia, double mes, double año, double numero, double hora, double minutos)
        {
            day = dia;
            month = mes;
            year = año;
            number = numero;
            h = hora;
            m = minutos;
        }
        public void imprimir2()
        {
            System.Console.WriteLine("Dia: " + day + "\n" + "Mes: " + month + "\n" + "Año: " + year + "\n" + "Numero telefonico: " + number + "\n" + "Hora: " + h +":"+ m);
        }

        //PROF NO ENCONTRE LA FORMA DE CONVERTIR LOS INTS A STRINGS
        /*
        public string Imprimir()
        {
            string daystr = "0";
            daystr = str (this.day);

            string monthstr = "0";
            monthstr = str (this.month);

            string Yearstr = "0";
            Yearstr = str (this.year);

            string numberstr = "0";
            numberstr = str (this.number);

            string Hrstr = "0";
            Hrstr = str (this.h);

            string Minstr = "0";
            Minstr = str (this.m);
            string str = ("Dia: " + daystr + "\n" + "Mes: " + monthstr + "\n" + "Año: " + Yearstr + "\n" + "Numero Telefonico: " + numberstr + "\n" + "Hora: " + Hrstr + ":" + Minstr);
            return str;
        }*/
    }
}

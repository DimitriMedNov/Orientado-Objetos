using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace EjercicioDateCSharp
{
    class Date
    {
        private int day, month, year;

        public int Day
        {
            get { return this.day; }
            set
            {
                if (this.month == 1 || this.month == 3 || this.month == 5 || this.month == 7 || this.month == 8 || this.month == 10 || this.month == 12)
                    this.day = value > 0 && value < 32 ? value : 1;
                else if (this.month == 4 || this.month == 6 || this.month == 9 || this.month == 11)
                    this.day = value > 0 && value < 31 ? value : 1;
                else if (year % 4 != 0 || year % 100 == 0 && year % 400 != 0) //año no bisiesto
                    this.day = value > 0 && value < 29 ? value : 1;
                else
                    this.day = value > 0 && value < 30 ? value : 1; //año bisiesto puede llegar a 29 de feb
            }
        }
        public int Month
        {
            get { return this.month; }
            set
            {
                this.month = value > 0 && value < 13 ? value : 1;

            }
        }
        public int Year
        {
            get { return this.year; }
            set
            {
                this.year = value > 0 && value < 9999 ? value : 1;
            }
        }
        public Date()
        {
            this.day = 1;
            this.month = 1;
            this.year = 1900;
        }
        public Date(int year, int month, int day)
        {
            this.Year = year; //nota que en C++ o Java escribíamos this->setYear(year) o this.setYear(year)
            this.Month = month;
            this.Day = day;
        }
        public void increaseDay()
        {
            int limite = 0;
            if (this.month == 1 || this.month == 3 || this.month == 5 || this.month == 7 || this.month == 8 || this.month == 10 || this.month == 12)
                limite = 31;
            else if (this.month == 4 || this.month == 6 || this.month == 9 || this.month == 11)
                limite = 30;
            else if (this.year % 4 != 0 || this.year % 100 == 0 && this.year % 400 != 0) //año no bisiesto
                limite = 28;
            else
                limite = 29;
            if (this.day < limite)
                this.day++;
            else
            {
                this.day = 1;
                this.increaseMonth();
            }
        }
        public void increaseMonth()
        {
            this.Month += 1;
        }
        public void increaseYear()
        {
            this.Year += 1;
        }
        public String toString()
        {
            String str;
            str = "hola";
            return str;
        }
    }
}

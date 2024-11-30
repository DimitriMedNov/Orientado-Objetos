// EjercicioDate.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <string>
using namespace std;

class Date {
private:
    int day, month, year;
public:
    Date() {
        this->day = 1;
        this->month = 1;
        this->year = 1900;
    }
    Date(int year, int month, int day) {
        this->setYear(year);
        this->setMonth(month);
        this->setDay(day);
    }
    void increaseDay(void) {
        int limite = 0;
        if (this->month == 1 || this->month == 3 || this->month == 5 || this->month == 7 || this->month == 8 || this->month == 10 || this->month == 12)
            limite = 31;
        else if (this->month == 4 || this->month == 6 || this->month == 9 || this->month == 11)
            limite = 30;
        else if (this->year % 4 != 0 || this->year % 100 == 0 && this->year % 400 != 0) //año no bisiesto
            limite = 28;
        else
            limite = 29;
        if (this->day < limite)
            this->day++;
        else {
            this->day = 1;
            this->increaseMonth();
        }

    }
    void increaseMonth(void) {
        if (this->month < 12)
            this->month++;
        else {
            this->month = 1;
            this->increaseYear();
        }
    }
    void increaseYear(void) {
        this->year = (this->year + 1) < 9999 ? this->year + 1 : 9999;

    }
    void changeDate(int year, int month, int day) {
        this->setYear(year);
        this->setMonth(month);
        this->setDay(day);
    }
    
    string toString() {
        string yearstr = "";
        if (this->year < 1000) {
            yearstr += "0"; //year = year + year = "0";
        }
        if (this->year < 100) {
            yearstr += "0";
        }
        if (this->year < 10) {
            yearstr += "0";
        }
        yearstr += to_string(this->year);
        string str = (this->day < 10 ? "0" : "") + to_string(this->day) + "/" + (this->month < 10 ? "0" : "") + to_string(this->month) + "/" + yearstr;
        return str;
    }
    //
    void setDay(int day) {
        if (this->month == 1 || this->month == 3 || this->month == 5 || this->month == 7 || this->month == 8 || this->month == 10 || this->month == 12)
            this->day = day > 0 && day < 32 ? day : 1;
        else if (this->month == 4 || this->month == 6 || this->month == 9 || this->month == 11)
            this->day = day > 0 && day < 31 ? day : 1;
        else if (year % 4 != 0 || year % 100 == 0 && year % 400 != 0) //año no bisiesto
            this->day = day > 0 && day < 29 ? day : 1;
        else
            this->day = day > 0 && day < 30 ? day : 1; //año bisiesto puede llegar a 29 de feb
    }
    int getDay(void) { return this->day; }
    //
    void setMonth(int month) {
        this->month = month > 0 && month < 13 ? month : 1;
        if (month < 0 || month > 12)
            cout << "ERROR: valor para mes se fija en 1 porque se intentó poner uno no valido." << endl;
    }
    int getMonth(void) { return this->month; }
    //
    void setYear(int year) {
        this->year = year > 0 && year < 9999 ? year : 1;
        if (year > 9999)
            cout << "ERROR: el año no puede ser mayor a 9999" << endl;
    }
    int getYear(void) { return this->year; }

};

int main()
{
    Date d1(1, 1, 1);
    cout << d1.toString() << endl;
    Date d2(2020, 12, 31);
    cout << d2.toString() << endl;
    d2.increaseDay();
    cout << d2.toString() << endl;
}

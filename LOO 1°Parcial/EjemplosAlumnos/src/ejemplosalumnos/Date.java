/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package ejemplosalumnos;

/**
 *
 * @author medno
 */
public class Date {
    private int year, month, day;
    public Date() {
        this.day = 1;
        this.month = 1;
        this.year = 1900;
    }
    public Date(int year, int month, int day){
        this.setYear(year);
        this.setMonth(month);
        this.setDay(day);
    }
    public void increaseDay() {
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
        else {
            this.day = 1;
            this.increaseMonth();
        }
    }
    public void increaseMonth(){
        if (this.month < 12)
            this.month++;
        else {
            this.month = 1;
            this.increaseYear();
        }
    }
    public void increaseYear() {
        this.year = (this.year + 1) < 9999 ? this.year + 1 : 9999;
    }
    public String toString() {
        String yearstr = "";
        if (this.year < 1000) {
            yearstr += "0";
        }
        if (this.year < 100) {
            yearstr += "0";
        }
        if (this.year < 10) {
            yearstr += "0";
        }
        yearstr += this.year;
        String str = (this.day < 10 ? "0" : "") + (this.day) + "/" + (this.month < 10 ? "0" : "") + (this.month) + "/" + yearstr;
        return str;
    }
    public void setYear(int year) {
        this.year = year > 0 && year < 9999 ? year : 1;
        if (year > 9999)
            System.out.println("ERROR: el año no puede ser mayor a 9999");
    }
    public int getYear() {
        return this.year;
    }
    public void setMonth(int month) {
        this.month = month > 0 && month < 13 ? month : 1;
        if (month < 0 || month > 12)
            System.out.println("ERROR: valor para mes se fija en 1 porque se intentó poner uno no valido.");
    }
    public int getMonth() {
        return this.month;
    }
    public void setDay(int day) {
        if (this.month == 1 || this.month == 3 || this.month == 5 || this.month == 7 || this.month == 8 || this.month == 10 || this.month == 12)
            this.day = day > 0 && day < 32 ? day : 1;
        else if (this.month == 4 || this.month == 6 || this.month == 9 || this.month == 11)
            this.day = day > 0 && day < 31 ? day : 1;
        else if (year % 4 != 0 || year % 100 == 0 && year % 400 != 0) //año no bisiesto
            this.day = day > 0 && day < 29 ? day : 1;
        else
            this.day = day > 0 && day < 30 ? day : 1; //año bisiesto puede llegar a 29 de feb
    }
    public int getDay() {
        return this.day;
    }
}
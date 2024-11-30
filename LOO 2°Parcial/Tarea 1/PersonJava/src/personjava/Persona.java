/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

package personjava;

/**
 * 
 * @author Dimitri Medina Novelo
 */
public class Persona {
    private String nombre, apellido; 
    private int edad, day, month, year;
    
    public Persona(String nombre, String apellido, int edad, int day, int month, int year) {
        this.setNombre(nombre);
        this.setApellido(apellido);
        this.edad=(edad);
        this.day=(day);
        this.month=(month);
        this.year=(year);
    }
    
    public String getNombre() { return this.nombre; }
    public void setNombre(String value) { this.nombre = value; }
    
    public String getApellido() { return this.apellido; }
    public void setApellido(String value) { this.apellido = value; }
    
    public int getEdad() { return this.edad; }
    public void setEdad(int value) { this.edad = edad < 0 ? 0 : edad; }
    
    public int getDay() { return this.day; }
    public void setDay(int value) {
        if (this.month == 1 || this.month == 3 || this.month == 5 || this.month == 7 || this.month == 8 || this.month == 10 || this.month == 12)
            this.day = day > 0 && day < 32 ? day : 1;
        else if (this.month == 4 || this.month == 6 || this.month == 9 || this.month == 11)
            this.day = day > 0 && day < 31 ? day : 1;
        else if (year % 4 != 0 || year % 100 == 0 && year % 400 != 0) //año no bisiesto
            this.day = day > 0 && day < 29 ? day : 1;
        else
            this.day = day > 0 && day < 30 ? day : 1; //año bisiesto puede llegar a 29 de feb
    }
    
    public int getMonth() { return this.month; }
    public void setMonth(int value) {
        this.month = month > 0 && month < 13 ? month : 1;
        if (month < 0 || month > 12);
    }
    
    public int getYear() {return this.year;}
    public void setYear(int value) {
        this.year = year > 0 && year < 9999 ? year : 1;
        if (year > 9999);
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
        String str = "NOMBRE: "+this.nombre+"\nAPELLIDO: " + this.apellido+"\nEDAD: "+(this.edad < 0 ? 0 : edad)+"\nDATE: " +(this.day < 10 ? "0" : "") + (this.day) + "/" + (this.month < 10 ? "0" : "") + (this.month) + "/" + yearstr;
        return str;
    }
}

/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package ejemplosalumnos;

/**
 *
 * @author MedNo
 */
public class Time {
    private int h,m,s;
    public Time(){
        this.h = 0;
        this.m = 0;
        this.s = 0;
    }
    public Time(int h,int m,int s) {
        this.setHour(h);
        this.setMinute(m);
        this.setSecond(s);
    }
    public void show(boolean formato) {
        if (formato) {
            //aquí imprimo en formato de 12 horas
            if (this.h <= 12) 
                System.out.println((this.h < 10 ? "0" : "") + this.h + ":" + (this.m < 10 ? "0" : "") + this.m + ":" + (this.s < 10 ? "0" : "") + this.s + (this.h==12?" PM" : " AM"));
            else
                System.out.println( ((this.h-12 < 10) ? "0" : "") + (this.h - 12) + ":" + (this.m < 10 ? "0" : "") + this.m + ":" + (this.s < 10 ? "0" : "") + this.s + " PM");
            
        }
        else {
            //aquí imprimo en formato de 24 hrs.
            System.out.println((this.h<10?"0":"")+ this.h +":"+ (this.m < 10 ? "0" : "")+  this.m +":"+ (this.s < 10 ? "0" : "") + this.s);;
        }
    }
    public void setHour(int h) {
        this.h = h<0 || h>23 ? 0 : h;
    }
    public int getHour() {
        return this.h;
    }
    public void setMinute(int m) {
        this.m = m >= 0 && m<60 ? m : 0;
    }
    public int getMinute() {
        return this.m;
    }
    public void setSecond(int s) {
        this.s = s < 0 || s > 59 ? 0 : s;
    }
    public int getSecond() {
        return this.s;
    }
    
    public static void main(String[] args) {
        Time t1 = new Time();
        Time t2 = new Time(23,45,98);
        t1.show(true);
        t1.show(false);
        t2.show(true);
        t2.show(false);
    }
}

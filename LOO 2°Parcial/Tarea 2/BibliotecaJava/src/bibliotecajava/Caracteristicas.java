/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

package bibliotecajava;

/**
 * 
 * @author Dimitri Medina Novelo
 */
public class Caracteristicas {
    protected String title; 
    protected int ci, year;
    
    public Caracteristicas() {
        this.title="";
        this.ci=0;
        this.year=0;
    }
    public Caracteristicas(String title, int ci, int year) {
        this.setTit(title);
        this.ci=(ci);
        this.year=(year);
    }
    public String getTit() { return this.title; }
    public void setTit(String value) { this.title = value; }
    
    public int getCOD() {return this.ci;}
    public void setCOD(int value) { this.ci = ci < 0 ? 0 : ci;}
    
    public int getYear() {return this.year;}
    public void setYear(int value) { this.year = year > 0 && year < 9999 ? year : 1;}
    //"\n"
    
    public void imprimir() {
        System.out.print("Titulo: " + this.title + "\nCodigo de identificacion: " + this.ci + "\nAnio de publicacion: " + this.year+"\n");
    }
}


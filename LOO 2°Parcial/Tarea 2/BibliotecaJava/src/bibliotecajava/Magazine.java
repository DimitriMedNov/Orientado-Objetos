/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

package bibliotecajava;
import bibliotecajava.Caracteristicas;
/**
 * 
 * @author Dimitri Medina Novelo
 */
public class Magazine extends Caracteristicas   {
    protected int volumen;
    
    public Magazine()
        {
            super();
            this.volumen = 0;
        }
    
    public Magazine(String title, int ci, int year, int volumen)
        {
            super( title,  ci,  year);
            this.volumen = volumen;
        }
    public int getVol() {return this.volumen;}
    public void setVol(int value) { this.volumen = volumen < 0 ? 0 : volumen;}
    
    public void setRevista(String title, int ci, int year, int volumen) 
    {
	this.volumen = volumen;
	this.title = title;
	this.ci = ci;
	this.year = year;
    }
    
    public void showDetails()
        {
            super.imprimir(); 
            System.out.print("Volumen: " + this.volumen + "\n");
        }
}

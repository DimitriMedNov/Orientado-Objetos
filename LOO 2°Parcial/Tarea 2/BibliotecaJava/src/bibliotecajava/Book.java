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
public class Book extends Caracteristicas{
    protected String autor, editorial;
    
    public Book()
        {
            super();
            this.autor = "";
            this.editorial = "";
        }
    
    public Book(String autor, String editorial, String title, int ci, int year)
        {
            super( title,  ci,  year);
            this.autor = autor;
            this.editorial = editorial;
        }
    
     public String getAutor() { return this.autor; }
     public void setAutor(String grade) { this.autor = autor; }
        
     public String getEdit() { return this.editorial; }
     public void setEdit(String type) { this.editorial = editorial; }
            
      public void setLibro(String autor, String editorial, String title, int ci, int year) {
	this.autor = autor;
	this.editorial = editorial;
	this.title = title;
	this.ci = ci;
	this.year = year;
}
        public void showDetails()
        {
            System.out.print("Autor: " + this.autor + "\nEditorial: " + this.editorial+"\n");
            super.imprimir(); 
        }
}

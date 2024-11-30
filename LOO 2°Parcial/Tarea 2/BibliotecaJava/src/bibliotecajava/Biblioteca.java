/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

package bibliotecajava;
import bibliotecajava.Book;
import bibliotecajava.Magazine;

/**
 * 
 * @author Dimitri Medina Novelo
 */
public class Biblioteca {
    protected int tamLibro, tamRevista;
    Book[] books;
    Magazine[] magazines;
    
    public Biblioteca(int tamLibros, int tamRevistas){
        this.tamLibro = tamLibros > 0 ? tamLibros : 1;
        this.tamRevista = tamRevistas > 0 ? tamRevistas : 1;
        this.books = new Book[this.tamLibro];
        this.magazines = new Magazine[this.tamRevista];
    }
    
    public int getTamRev() {return this.tamRevista;}
    public int getTamLib() {return this.tamLibro;}
    
    public void setlibros(int indx, String autor, String editorial, String title, int ci, int year){
        this.books[indx].setLibro(autor,  editorial,  title,  ci,  year);
    }
    
    public void setrevistas(int indx, String title, int ci, int year, int volumen){
        this.magazines[indx].setRevista(title, ci, year, volumen);
    }
    
    public void ShowCatalog(){
        System.out.println("-------------- Inventario -------------------");
        System.out.println("**************** Boook *********************");
        for (int i = 0; i < tamLibro; i++) {
                     System.out.println("Libro: " + i+1);
                      this.books[i].showDetails();
	}
        System.out.println("");
        System.out.println("**************** Magazine *********************");
        for (int i = 0; i < tamRevista; i++) {
                     System.out.println("Revista: " + i+1);
                      this.magazines[i].showDetails();
	}
    }
}

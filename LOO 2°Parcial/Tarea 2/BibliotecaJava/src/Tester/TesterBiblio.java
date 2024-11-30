/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

package Tester;
//import bibliotecajava.Caracteristicas;
import bibliotecajava.Book;
import bibliotecajava.Magazine;
import bibliotecajava.Biblioteca;
/**
 * 
 * @author Dimitri Medina Novelo
 */
public class TesterBiblio {
    public static void main(String []args){
        //Book b1 = new Book("Chems Ronaldo", "Alfaguara", "Aprende a programar", 86064, 2009);
        //Magazine m1 = new Magazine("Aprende a programar", 86064, 2009, 165);
        
        int  ci, year, volumen;
        String title, autor, editorial;
        
        Biblioteca h1 = new Biblioteca(3, 2);
        
        for (int i = 0; i < h1.getTamLib(); i++) {
        //Book b1= new Book("Chems Ronaldo", "Alfaguara", "Aprende a programar", 86064, 2009);
        //Book b2= new Book("Chems Ronaldo", "Alfaguara", "Aprende a programar", 86064, 2009);
        //Book b3= new Book("Chems Ronaldo", "Alfaguara", "Aprende a programar", 86064, 2009);
        h1.setlibros(i, "Chems Ronaldo", "Alfaguara", "Aprende a programar", 86064, 2009);
        //h1.setlibros(i, autor, editorial, title, ci, year);
    }
        System.out.println("");
        for (int i = 0; i < h1.getTamRev(); i++) {
        //Magazine m1("Aprende a programar", 86064, 2009, 165);
        //Magazine m2("Aprende a programar", 86064, 2009, 165);
        h1.setrevistas(i, "Aprende a programar", 86064, 2009, 165);
        //h1.setrevistas(i, title, ci, year, volumen);
    }
        h1.ShowCatalog();
    }
}

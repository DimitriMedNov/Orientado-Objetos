/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package pkgclass.book;

/**
 *
 * @author Dimitri Medina Novelo
 */
public class ClassBook {
    private int numpags, edicion, isbn;
    private String title, autor, editoral, status;
    
    public ClassBook ( ) {
        this.title = ("*Sin informacion previa*");
        this.autor = ("*Sin informacion previa*");
        this.editoral = ("*Sin informacion previa*");
        this.numpags = 0;
        this.edicion = 0;
        this.isbn = 0;
        this.status = ("*Sin informacion previa*");
    }
    public ClassBook (String title, String autor, String editorial, int numpages, int edicion, int isbn, String status ) {
        this.setTitle(title);
        this.setAutor(autor);
        this.setEditorial(editorial);
        this.setNumpags(numpages);
        this.setEdicion(edicion);
        this.setISBN(isbn);
        this.setStatus(status);
    }
    //Titulo
    public void setTitle(String title) {this.title = title;}
    public String  getTitle ( ) {return this.title;}
    //Autor
    public void setAutor(String autor) {this.autor = autor;}
    public String  getAutor ( ) {return this.autor;}
    //Editorial
    public void setEditorial(String editoral) {this.editoral = editoral;}
    public String getEditorial ( ) { return this.editoral; }
    //Paginas//
    public void setNumpags(int numpags) {this.numpags = numpags;}
    public int getNumPags ( ) { return this.numpags; }
    //Edicion//
    public void setEdicion(int edicion) {this.edicion = edicion;}
    public int getEdicion() { return this.edicion; }
    //ISBN//
    public void setISBN(int isbn) {this.isbn = isbn;}
    public int getISBN ( ) { return this.isbn; }
    //Status
    public void setStatus (String status) {this.status = status;}
    public String getStatus() { return this.status; }
    //strings
    public String toString() {
        String numpagstr = "";
         numpagstr += this.numpags;
         
         String edicionstr = "";
        edicionstr += this.edicion;
        
        String ISBNstr = "";
        ISBNstr += this.isbn;
        
        String str = ("Titulo: " + this.title ) + ("\n") + ("Autor: " + this.autor ) + ("\n") + ("Editorial: " + this.editoral ) + ("\n") + ("Numero de paginas: " + numpagstr) + ("\n") + ("Edicion : " + edicionstr) + ("\n") + ("ISBN : " + ISBNstr) + ("\n") + ("Status: " + this.status );
        return str;
    }  
    public static void main(String[] args) {
        System.out.println("Book 1");
        ClassBook b1 = new ClassBook ("Runnear","chems","socrates",7,5886,966,"leido" );
        System.out.println(b1.toString());
        System.out.println("");
        System.out.println("");
        System.out.println("Book 2");
        ClassBook b2 = new ClassBook ("LOO", "Jorge Rivera Rovelo", "UAM", 600, 2021, 467846, "En Proceso..");
        System.out.println(b2.toString());
        }
}

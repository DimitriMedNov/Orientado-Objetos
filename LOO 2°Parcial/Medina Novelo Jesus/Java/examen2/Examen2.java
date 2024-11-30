/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package examen2;
import Clases.Conica;
import Clases.Circulo;
import Clases.Point2D;
/**
 *
 * @author Dimitri Medina Novelo
 */
public class Examen2 {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        Point2D punto;
        System.out.println("****************************************************************");
        System.out.println("******************** PROBANDO POLIMORFISMO *********************");
        System.out.println("****************************************************************");
        System.out.println("CONICAS CREADAS AL MOMENTO: " + Conica.numConicas + "\n\n");
        Conica coni;
        coni = new Circulo(1,1,2);;
        System.out.println(coni.toString());
         System.out.println("--> movemos esta cónica....");
         coni.mover(new Punto2D(0,0));
         System.out.println(coni.toString());
         punto = new Punto2D(2,0);
         if(coni.estaSobre(punto)) {
         System.out.println("El punto " + punto.toString() + " esta sobre la cónica");
         } else {
         System.out.println("El punto " + punto.toString() + " NO esta sobre la cónica");
         }
         punto = new Punto2D(0,1);
         if(coni.estaSobre(punto)) {
         System.out.println("El punto " + punto.toString() + " esta sobre la cónica");
         } else {
         System.out.println("El punto " + punto.toString() + " NO esta sobre la cónica");
         }
         System.out.println(coni.ecuacionCanonica());
         System.out.println("CONICAS CREADAS AL MOMENTO: " + Conica.numConicas + "\n\n");
        
         coni = new Elipse(new Punto2D(1,3), 4, 2, true);
         System.out.println(coni.toString());
         System.out.println("--> movemos esta cónica....");
         coni.mover(new Punto2D(0,0));
         System.out.println(coni.toString());
         punto = new Punto2D(4,0);
         if(coni.estaSobre(punto)) {
         System.out.println("El punto " + punto.toString() + " esta sobre la cónica");
         } else {
         System.out.println("El punto " + punto.toString() + " NO esta sobre la cónica");
         }
       TesterConicas.java
       2/2
         punto = new Punto2D(1,1);
         if(coni.estaSobre(punto)) {
        System.out.println("El punto " + punto.toString() + " esta sobre la cónica");
         } else {
         System.out.println("El punto " + punto.toString() + " NO esta sobre la cónica");
         }
         System.out.println(coni.ecuacionCanonica());
         System.out.println("CONICAS CREADAS AL MOMENTO: " + Conica.numConicas + "\n\n");
        
         coni = new Parabola(new Punto2D(1,-1), 1, false);
         System.out.println(coni.toString());
         System.out.println("--> movemos esta cónica....");
         coni.mover(new Punto2D(0,0));
         System.out.println(coni.toString());
         punto = new Punto2D(2,1);
         if(coni.estaSobre(punto)) {
         System.out.println("El punto " + punto.toString() + " esta sobre la cónica");
         } else {
         System.out.println("El punto " + punto.toString() + " NO esta sobre la cónica");
         }
         punto = new Punto2D(0,1);
         if(coni.estaSobre(punto)) {
         System.out.println("El punto " + punto.toString() + " esta sobre la cónica");
         } else {
         System.out.println("El punto " + punto.toString() + " NO esta sobre la cónica");
         }
         System.out.println(coni.ecuacionCanonica());
         System.out.println("CONICAS CREADAS AL MOMENTO: " + Conica.numConicas + "\n\n");
        
         coni = new Hiperbola(new Punto2D(1,-1), 6, 4, true);
         System.out.println(coni.toString());
         System.out.println("--> movemos esta cónica....");
         coni.mover(new Punto2D(0,0));
         System.out.println(coni.toString());
         punto = new Punto2D(2,0);
         if(coni.estaSobre(punto)) {
         System.out.println("El punto " + punto.toString() + " esta sobre la cónica");
         } else {
         System.out.println("El punto " + punto.toString() + " NO esta sobre la cónica");
         }
         punto = new Punto2D(0,1);
         if(coni.estaSobre(punto)) {
         System.out.println("El punto " + punto.toString() + " esta sobre la cónica");
         } else {
         System.out.println("El punto " + punto.toString() + " NO esta sobre la cónica");
         }
         System.out.println(coni.ecuacionCanonica());
       
               } 
        System.out.println("CONICAS CREADAS AL MOMENTO: " + Conica.numConicas + "\n\n");

    }
    
}

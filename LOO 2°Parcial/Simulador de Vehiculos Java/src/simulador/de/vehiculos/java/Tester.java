/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package simulador.de.vehiculos.java;
import Clases.Vehiculo;
import Clases.Auto;
import Clases.Camion;
import Clases.Remolque;
import Clases.DemasiadoRapidoException;
import Clases.ValorInvalidoException;
import Clases.VehiculoDetenidoException;
import java.util.Scanner;

/**
 *
 * @author Dimitri Medina Novelo
 */
    /**
     * @param args the command line arguments
     */
class Tester {
  public static void main(String[] args) {
 System.out.println("____Auto_____\n");
        Auto a1 = new Auto(4,"afwgwq");
        System.out.println(a1.toString() + "\n");
        a1.acelerar(201);
        System.out.println(a1.toString() + "\n");
        a1.frenar(300);
        System.out.println(a1.toString() + "\n");
        System.out.println("Numero de Puertas: " + a1.getNumpuertas() + "\n");

        // camion
        System.out.println("____Camion___\n");
        Camion c1 = new Camion("CWA123");
        System.out.println(c1.toString()+ "\n");
        c1.acelerar(100);
        System.out.println(c1.toString()+ "\n");
        c1.frenar(90);
        System.out.println(c1.toString()+ "\n");

        //Remolque
        System.out.println("______Remolque___----\n");
        Remolque r1 = new Remolque(200,10,5,6);
        System.out.println(r1.toString());;
}

/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

package Clases;

/**
 * 
 * @author Dimitri Medina Novelo
 */
public class DemasiadoRapidoException extends Exception{
    
    public DemasiadoRapidoException(){
      super("\nEl vehiculo llego a su velociad maxima.");
    }
    
    @Override
    public String toString(){
      return super.toString();
    }
}

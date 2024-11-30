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
public class NotValidValue  extends Exception{
    public NotValidValue(){
      super("\nEl vehiculo ya esta detenido.");
    }
    
    @Override
    public String toString(){
      return super.toString();
    }
}

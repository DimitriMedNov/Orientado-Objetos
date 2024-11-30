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
public class ValorInvalidoException extends Exception{
    
    public ValorInvalidoException(){
      super("\nValor no valido para modificar la velocidad, por favor ingrese un valor positivo.");
    }
    
    @Override
    public String toString(){
      return super.toString();
    }
}
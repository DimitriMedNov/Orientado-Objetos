/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package othello;

/**
 *
 * @author Los Mikes
 */
public class EntradaIncorrecta extends Exception{
    
    public EntradaIncorrecta(){
    super("\nUps, al parecer pusiste una letra o un caracter no permitido o algun numero con decimales. Intenta otra vez.");
  }
    
    @Override
    public String toString(){
      return super.toString();
    }
}

                
               
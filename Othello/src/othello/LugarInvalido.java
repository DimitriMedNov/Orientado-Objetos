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
public class LugarInvalido extends Exception{
      public LugarInvalido(){
      super("\nCoordenada no valida. Intenta otra vez.");
    }
    
    @Override
    public String toString(){
      return super.toString();
    }
}



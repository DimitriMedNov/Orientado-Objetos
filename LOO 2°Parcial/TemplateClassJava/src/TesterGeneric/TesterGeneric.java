/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

package TesterGeneric;
import templateclassjava.GenericClass;

/**
 * 
 * @author Dimitri Medina Novelo
 */
public class TesterGeneric {
    public static void main(String[] args)
    {
        GenericClass<String> Str = new GenericClass<String>("Hola mundo!!");
  
        GenericClass<Integer> integer = new GenericClass<Integer>(9);
        
        GenericClass<Float> floatObj = new GenericClass<Float>(10.55f);
        
        Str.showType();
        integer.showType();
        floatObj.showType();
    }
}

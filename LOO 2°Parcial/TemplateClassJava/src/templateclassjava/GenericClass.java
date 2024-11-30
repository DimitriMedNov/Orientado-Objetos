/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

package templateclassjava;

/**
 * 
 * @author Dimitri Medina Novelo
 */
    public class GenericClass<T> {
    private T value;
  
    public GenericClass(T value)
    {
        this.value = value;
    }
    public T getValue(){
        return this.value;
    }
    public void setValue(T val) {
        this.value = val;
    }
  
    public void showType()
    {
        System.out.println("Type:" + 
            value.getClass().getSimpleName());
        System.out.println("Value: " + value);
    }    
}
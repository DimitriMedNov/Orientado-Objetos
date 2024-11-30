/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

package complejoscuaternionesjava;
import ClasesComplejos.Complex;
import ClasesComplejos.Quarternion;
import ClasesComplejos.HiperComplex;
/**
 * 
 * @author Dimitri Medina Novelo
 */
public class TesterComplejos {
    public static void main(String[] args) {
        Complex c1 = new Complex(1,2);
        Complex c2 = new Complex(1,3);
        Complex c3 = new Complex();
        
        c1.print();
        c2.print();
        c3 = c1;
        c3.conjugate();
        c3.print();
        
        Quarternion q1 = new Quarternion(1,2,3,4);
        Quarternion q2 = new Quarternion(1,-2,3,-4);
        Quarternion q3 = new Quarternion();
        
        q1.print();
        q2.print();
        q3.print();
        
        HiperComplex ref;
        ref = c3;
        ref.print();
        ref = q3;
        ref.print();
        
    }
}

/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package testers;
import ejemplosalumnos.Complex;
public class ClaseComplex {
    public static void main(String[] args) {
        Complex A = new Complex();
        Complex B = new Complex(-3.0f, 5.49f);
        Complex C = new Complex(7.24f, -9.1f);
        System.out.println("Numero n1: " + A.toString());
        System.out.println("Numero n2: " + B.toString());
        System.out.println("Numero n3: " + C.toString());
        A = B.conjugate();
        System.out.println("Numero n1: " + A.toString());
        System.out.println("Modulo de n2: " + B.module());
        System.out.println("Modulo de n3: " + C.module());
        //probando operaciones binarias
        A.add(B, C);
        System.out.println("SUMA: (" + B.toString() + ") + (" + C.toString() + ") = " + A.toString());
        A.subs(B, C);
        System.out.println("RESTA: (" + B.toString() + ") - (" + C.toString() + ") = " + A.toString());
        A.mult(B, C);
        System.out.println("MULTIPLICACION: (" + B.toString() + ") * (" + C.toString() + ") = " + A.toString() );
        A.divi(B, C);
        System.out.println("DIVISION: (" + B.toString() + ") / (" + C.toString() + ") = " + A.toString());
    }
}
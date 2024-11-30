/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

package ClasesComplejos;

/**
 * 
 * @author Dimitri Medina Novelo
 */
public class Complex extends HiperComplex{
    private double real, imag;
     public Complex(){
     this.real = 0;
    this.imag = 0;
     }
     public Complex(double r, double i){
     this.real = r;
    this.imag = i;
     }
     public void add(Complex n1, Complex n2){
     this.real = n1.getReal() + n2.getReal();
    this.imag = n1.getImag() + n2.getImag();
     }
     public void subs(Complex n1, Complex n2){
     this.real = n1.getReal() - n2.getReal();
    this.imag = n1.getImag() - n2.getImag();
     }
     public void mult(Complex n1, Complex n2){
     this.real = n1.getReal() * n2.getReal() - n1.getImag() * n2.getImag();
    this.imag = n1.getReal() * n2.getImag() + n1.getImag() * n2.getReal();
     }
     public void divi(Complex n1, Complex n2){
     this.real = (n1.getReal() * n2.getReal() + n1.getImag() * n2.getImag()) / (n2.getReal()* n2.getReal() + n2.getImag() * n2.getImag());
    this.imag = (-n1.getReal() * n2.getImag() + n2.getReal() * n1.getImag()) / (n2.getReal() * n2.getReal() + n2.getImag() * n2.getImag());
     }

     public void setReal(double r){
     this.real = r;
     }
     public double getReal(){
     return this.real;
     }
     public void setImag(double i){
     this.imag = i;
     }
     public double getImag() {
     return this.imag;
     }
     
     @Override
     public double module(){
     return Math.sqrt(this.real * this.real + this.imag* this.imag);
     }
     @Override
     public void  conjugate(){
         this.imag *= -1;
     }
     @Override
     public String toString(){
     String str;
    str = (this.real) + (this.imag<0?"":"+") + (this.imag) + " i";
    return str;
     }
     @Override
     public void print(){
         System.out.println((this.real) + (this.imag<0?"":"+") + (this.imag) + " i");
     }
}
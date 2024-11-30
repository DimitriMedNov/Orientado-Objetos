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
public class Quarternion extends HiperComplex{
    private double real, imagI, imagJ, imagK;
    
    public Quarternion() {
        this.real = 0;
        this.imagI = 0;
        this.imagJ = 0;
        this.imagK = 0;
    }
    public Quarternion(double r, double i, double j, double k) {
        this.real = r;
        this.imagI = i;
        this.imagJ = j;
        this.imagK = k;
    }
    public void add(Quarternion q1, Quarternion q2) {
        this.real = q1.getReal() + q2.getReal();
        this.imagI = q1.getImagI() + q2.getImagI();
        this.imagJ = q1.getImagJ() + q2.getImagJ();
        this.imagK = q1.getImagK() + q2.getImagK();
    }
    public void subs(Quarternion q1, Quarternion q2) {
        this.real = q1.getReal() - q2.getReal();
        this.imagI = q1.getImagI() - q2.getImagI();
        this.imagJ = q1.getImagJ() - q2.getImagJ();
        this.imagK = q1.getImagK() - q2.getImagK();
    }
    public void mult(Quarternion q1, Quarternion q2) {
        this.real = q1.getReal()*q2.getReal() - q1.getImagI()*q2.getImagI() - q1.getImagJ()*q2.getImagJ() - q1.getImagK()*q2.getImagK();
        this.imagI = q1.getReal()*q2.getImagI() + q1.getImagI()*q2.getReal() + q1.getImagJ()*q2.getImagK() - q1.getImagK()*q2.getImagJ();
        this.imagJ = q1.getReal()*q2.getImagJ() - q1.getImagI()*q2.getImagK() + q1.getImagJ()*q1.getReal() + q1.getImagK()*q2.getImagI();
        this.imagK = q1.getReal()*q2.getImagK() + q1.getImagI()*q2.getImagJ() - q1.getImagJ()*q2.getImagI() + q1.getImagK()*q2.getReal();
    }
    public void divi(Quarternion q1, Quarternion q2) {
        //pendiente de tarea
    }
    
    public double getReal(){ return this.real; }
    public double getImagI(){ return this.imagI; }
    public double getImagJ(){ return this.imagJ; }
    public double getImagK(){ return this.imagK; }
    
    public void setReal(double value) { this.real = value; }
    public void setImagI(double value) { this.imagI = value; }
    public void setImagJ(double value) { this.imagJ = value; }
    public void setImagK(double value) { this.imagK = value; }
    /* MÉTODOS POLIMÓRFICOS */
    @Override
    public void conjugate() {
        this.imagI *= -1;
        this.imagJ *= -1;
        this.imagK *= -1;
    }
    @Override
    public double module() {
        return Math.sqrt(this.real * this.real + this.imagI * this.imagI + this.imagJ * this.imagJ + this.imagK * this.imagK);
    }
    @Override
    public String toString() {
        String str;
	str = (this.real) + (this.imagI<0?"":"+") + (this.imagI) + " i" + (this.imagJ<0?"":"+") + (this.imagJ) + " j" + (this.imagK<0?"":"+") + (this.imagK) + " k";
	return str;
    }
    @Override
    public void print() {
        System.out.println((this.real) + (this.imagI<0?"":"+") + (this.imagI) + " i" + (this.imagJ<0?"":"+") + (this.imagJ) + " j" + (this.imagK<0?"":"+") + (this.imagK) + " k");
    }
    
}

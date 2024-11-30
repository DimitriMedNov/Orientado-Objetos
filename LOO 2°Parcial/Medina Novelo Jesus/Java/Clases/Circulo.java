/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

package Clases;
import Clases.Conica;
import Clases.Circulo;
/**
 * 
 * @author Dimitri Medina Novelo
 */
public class Circulo extends Conica{
    private final double PI = 3.141592;
    private Point2D centro;
    private double radio;
    public Circulo(){
        this.centro = new Point2D(0, 0);
        this.radio = 1;
    }
    public Circulo(Point2D obj, double _radio){
        this.centro = new Point2D(obj.getX(), obj.getY());
        try{
            this.setRadio(_radio);
        }
        catch (NotValidValue e){
            System.out.println(e.toString());
        }
        
    }
    //@Override
    public boolean estaSobre(Point2D obj){
        this.getClass();
        if (this.getEcGeneral() != 0){
            System.out.println("La ecuacion si esta sobre la circunferencia");
            return true;
        }
        System.out.println("La ecuacion no esta sobre la circunferencia");
        return false;
    }
    //@Override
    public Point2D mover(float _x, float _y){
        return this.centro = new Point2D(_x, _y);
    }
    //@Override
    public String ecuacionCanonica(float _x, float _y){
        return "\n(x - " + centro.getX() + ")^2" + "(y - " + centro.getY() + ")^2" + " = " + this.radio + "^2";
    }
    //@Override
    public String toString(){
        String str = "Centro: " + this.centro + "\nRadio: " + this.radio;
        return str;
    }
    public double ecGeneral(Point2D obj, double radio, double h, double k){
        this.radio = Math.sqrt(((obj.getX() - h) * (obj.getX() - h)) + ((obj.getY() - k) + (obj.getY() - k)));
        return this.radio;
    }
    public double getRadio(){
        return this.radio;
    }
    public void setRadio(double radio) throws NotValidValue{
        if (radio <= 0){
            throw new NotValidValue();
        }
        this.radio = radio;

    }
}
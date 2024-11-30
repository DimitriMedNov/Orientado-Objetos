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
public class Point2D  {
    private double x, y;
    public Point2D () {
        this.x = 0;
        this.y = 0;
    }
    public Point2D (double _x, double _y) {
        this.x = _x;
        this.y = _y;
    }
    public void Trasladar(double dx, double dy){
        this.x += dx;
        this.y += dy;
    }
    public void Show(){
        System.out.println("("+this.x+","+this.y+")");
    }
    public double getX(){
        return this.x;
    }
    public double getY(){
           return this.y;
    }
    public void setX(double x){
        this.x = x;
    }
    public void setY(double y){
        this.y = y;
    }
}

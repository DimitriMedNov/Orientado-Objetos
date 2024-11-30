/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

package Clases;
import Clases.Point2D;
/**
 * 
 * @author Dimitri Medina Novelo
 */
public abstract class Conica {
    public static int numObj = 0;
    public abstract boolean estaSobre(Point2D obj);
    public abstract Point2D mover(float _x, float _y);
    public abstract String ecuacionCanonica();
    public abstract String toString();
}


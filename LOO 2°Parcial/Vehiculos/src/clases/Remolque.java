/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package clases;

/**
 *
 * @author Roberto
 */
public class Remolque 
{
    private double alto;
    private double ancho;
    private double largo;
    private double pesomax;
    public void setAlto(double alto)
    {
        this.alto = alto;
    }
    public double getAlto()
    {
        return(this.alto);
        
    }
    public void setAncho(double ancho)
    {
        this.ancho = ancho;
    }
    public double getAncho()
    {
        return(this.ancho);
        
    }
    public void setLargo(double largo)
    {
        this.largo = largo;
    }
    public double getLargo()
    {
        return(this.largo);
        
    }
    public void setPesomax(double pesomax)
    {
        this.pesomax = pesomax;
    }
    public double getPesomax()
    {
        return(this.pesomax);
        
    }
    
    public void poner()
    {
        System.out.println("Remolque instalado");
    }
    public void quitar()
    {
        System.out.println("Remolque desisntalado");
    }
    @Override
    public String toString()
    {
        String info = "Dimensiones: " + getAlto() + " de alto, " + getAncho() + " de ancho, ";
        info +=getLargo() + " m de largo.\n Peso maximo" + getPesomax() + "kg";
        return(info);
    }
}

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
public class Auto extends Vehiculo {
  public int puertas;

  Auto(int puertas, String matricula) {
    super(matricula);
    this.puertas = puertas;
  }

public int getNumpuertas(){ return this.puertas; }
  
  @Override
  public void acelerar(float cantidad) {
    try{
      this.velocidad += cantidad;
      if(this.velocidad  > 200){
        throw new DemasiadoRapidoException();
      }
    }catch(DemasiadoRapidoException e) {
      System.out.println(e.toString());
    }finally{
      System.out.print(" ");
    }
    
  }
  @Override
  public void frenar(float cantidad) {
    try{
      this.velocidad -= cantidad;
      if(velocidad  <= 0){
        throw new VehiculoDetenidoException();
      }
    }catch(VehiculoDetenidoException e) {
      System.out.println(e.toString());
    }finally{
      System.out.print(" ");
    }
  }
  @Override
  public String toString(){
    return "\n///AUTO/// \nMatricula: " + this.matricula + "\nVelocidad actual: " + this.velocidad;
  }
}

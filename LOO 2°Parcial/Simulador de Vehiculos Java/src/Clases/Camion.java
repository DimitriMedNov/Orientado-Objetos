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
public class Camion extends Vehiculo {
  public Remolque r;
  Camion(String matricula) {
    super(matricula);
    this.r = null;
  }

  void ponerRemolque(Remolque r) {
    this.r = r;
  }

  void quitarRemolque() {
    this.r = null;
  }
  @Override
  public void acelerar(float cantidad) {
    try{
      this.velocidad += cantidad;
      if(this.r  != null && this.velocidad > 90){
        throw new DemasiadoRapidoException();
      }
      else if(this.velocidad > 110){
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
      if(velocidad  <= 0){
        throw new VehiculoDetenidoException();
      }
      this.velocidad -= cantidad;
    }catch(VehiculoDetenidoException e) {
      System.out.println(e.toString());
    }finally{
      System.out.print(" ");
    }
  }
  @Override
  public String toString(){
    return (this.r == null ? "\n///CAMION/// \nMatricula: " : "\n///CAMION CON REMOLQUE/// \nMatricula: ") + this.matricula + "\nVelocidad actual: " + this.velocidad + (this.r != null ? this.r.toString() : " ");
  }
}

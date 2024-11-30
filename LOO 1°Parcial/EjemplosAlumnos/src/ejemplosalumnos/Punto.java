/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package ejemplosalumnos;
/**
 *
 * @author MedNo
 */
public class Punto {
  private float x,y;
public Punto() {
    this.x = 0;
    this.y  = 0;
}  
  public Punto(float x,float y) {
      this.x = x;
    this.y  = y;
  }
  public void trasladar(float dx,float dy){
      this.x += dx;
      this.y +=  dy;
  }
  public void setX(float x){
      this.x = x;
  }
  public float getX(){
      return this.x;
  }
   public void setY(float x){
      this.y = y;
  }
  public float getY(){
      return this.y;
  }
  //Ahora escribimos un main para probar la clase
  public static void main(String[] args) {
      Punto p1 = new Punto();
      Punto p2 = new Punto(-5,3.67f);
      System.out.println("p1: (" + p1.getX() + ", " + p1.getY() + ")");
      p1.trasladar(1, -3);
      System.out.println("p1 traslado (" + p1.getX() + ", " + p1.getY() + ")");
      
      System.out.println("p2: (" + p2.getX() + ", " + p2.getY() + ")");
      p2.trasladar(1, -3);
      System.out.println("p2 traslado (" + p2.getX() + ", " + p2.getY() + ")");
      
  }
}

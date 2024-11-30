public abstract class Vehiculo {
  public String matricula;
  public float velocidad;
  public float cantidad;

  // me pasan la matricula como parametro y la velocidad no es necesaria ya que es 0
  Vehiculo(String matricula) {
    this.matricula = matricula;
    this.velocidad = 0;
  }

  // declaro mis metodos abstractos
  public abstract void acelerar(float cantidad);

  public abstract void frenar(float cantidad);

  public abstract String toString();

  public void setVelocidad(float velocidad){
    this.velocidad = velocidad;
  }
}
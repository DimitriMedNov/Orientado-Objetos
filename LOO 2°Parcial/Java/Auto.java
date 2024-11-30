public class Auto extends Vehiculo {
  public int puertas;

  Auto(int puertas, String matricula) {
    super(matricula);
    this.puertas = puertas;
  }

  
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
public class Remolque{
  public double pMax, alto, ancho, largo;
  Remolque(double pMax, double alto, double ancho, double largo){
    this.pMax = pMax;
    this.alto = alto;
    this.ancho = ancho;
    this.largo = largo;
  }

  @Override
  public String toString(){
    return "\n///REMOLQUE/// \nEl remolque tiene las siguientes medidas: \nAltura: " + this.alto + "\nAncho: " + this.ancho + "\nLargo: " + this.largo + "\nY puede cargar: " + this.pMax;
  }
}
public class VehiculoDetenidoException extends Exception{
    
    public VehiculoDetenidoException(){
      super("\nEl vehiculo ya esta detenido.");
    }
    
    @Override
    public String toString(){
      return super.toString();
    }
}

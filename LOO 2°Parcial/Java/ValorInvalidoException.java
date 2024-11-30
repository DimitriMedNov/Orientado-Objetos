public class ValorInvalidoException extends Exception{
    
    public ValorInvalidoException(){
      super("\nValor no valido para modificar la velocidad, por favor ingrese un valor positivo.");
    }
    
    @Override
    public String toString(){
      return super.toString();
    }
}

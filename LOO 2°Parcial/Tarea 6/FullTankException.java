public class FullTankException extends Exception{
    
    public FullTankException (){
      super("\nEl tanque sobrepasara su capacidad maxima.");
    }
    
    @Override
    public String toString(){
      return super.toString();
    }
    
    
}

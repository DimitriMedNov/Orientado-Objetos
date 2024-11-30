public class EmptyTankException extends Exception{
    
    public EmptyTankException(){
      super("\nEl tanque se vaciara por completo.");
    }
    
    @Override
    public String toString(){
      return super.toString();
    }
}

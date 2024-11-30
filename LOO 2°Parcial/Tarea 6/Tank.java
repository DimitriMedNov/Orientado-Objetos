public class Tank {

  protected float capacity, actualCharge;
  protected String type;
        
  public Tank(){
    this.capacity = 100;
    this.actualCharge = 0;
    this.type = "Agua";
  }
  public Tank(float capacity, float actualCharge, String type){
    this.capacity = capacity;
    this.actualCharge = actualCharge;
    this.type = type;
  }
  public float getCapacity(){
    return this.capacity;
  }
  public float getCharge(){
    return this.actualCharge;
  }
  public String getType(){
    return this.type;
  }
    public void addTank(float var){
    try{
      if(actualCharge + var > capacity){
        var = (this.capacity - this.actualCharge);
        this.actualCharge += var;
        throw new FullTankException();
      }
      this.actualCharge += var;
    }catch(FullTankException e){
      System.out.println("!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!");
      System.out.println(e.toString());
      System.out.println("Se agregaron " + var + " litros.");
      System.out.println("!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!");
    }finally{
      //System.out.println(" ");
    }
  }
  public void empTank (float var){
    try{
      if (actualCharge - var <= 0){
        this.actualCharge -= actualCharge;
        throw new EmptyTankException();
      }
      this.actualCharge -= var;
    }catch(EmptyTankException e){
      System.out.println("!!!!!!!!!!!!!!!!!!");
      System.out.println(e.toString());
      System.out.println("!!!!!!!!!!!!!!!!!!");
    }finally{
      print();
    }
  }
  
  public void print(){
    System.out.println("***************************************");
    //System.out.println("La capacidad del tanque es: " + capacity);
    System.out.println("La carga actual del tanque es: " + actualCharge);
    System.out.println("***************************************");
  }
}
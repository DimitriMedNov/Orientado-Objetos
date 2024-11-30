import java.util.Scanner;

public class Main {
  public static void main(String[] args) {

    Tank t1 = new Tank(100, 37, "gasolina");
    
    System.out.println("La capacidad del tanque es: " + t1.getCapacity());
    t1.print();

    while(t1.getCharge() < t1.getCapacity() && t1.getCharge() > 0){
    Scanner input = new Scanner(System.in);
    System.out.println("Cuanto combustible quieres cargar?");
    float add = input.nextFloat();
    System.out.println("Cuanto combustible quieres retirar?");
    float emp = input.nextFloat();
    t1.addTank(add);
    t1.empTank(emp);
    }
  }
}
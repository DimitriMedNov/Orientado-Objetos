import java.util.Scanner;

class Main {
  public static void main(String[] args) {
    System.out.println("AUTO: ");
    System.out.println("Ingrese la velocidad: ");
    Scanner input = new Scanner(System.in);
    float vel = input.nextFloat();
    while(vel < 0){
      try{
        if(vel < 0){
          throw new ValorInvalidoException();
        }
      }catch(ValorInvalidoException e){
        System.out.println(e.toString());
        System.out.println("Ingrese la velocidad: ");
        vel  = input.nextFloat();
      }finally{
        System.out.println();
      }
    }
    System.out.println("Ingrese el numero de puertas: ");
    int puertas = input.nextInt();
    System.out.println("Ingrese la matricula: ");
    String placa = input.nextLine();
    placa = input.nextLine();

    System.out.println("CAMION 1: ");
    System.out.println("Ingrese la velocidad: ");
    float vel2 = input.nextFloat();
    while(vel2 < 0){
      try{
        if(vel2 < 0){
          throw new ValorInvalidoException();
        }
      }catch(ValorInvalidoException e){
        System.out.println(e.toString());
        System.out.println("Ingrese la velocidad: ");
        vel2  = input.nextFloat();
      }finally{
        System.out.println();
      }
    }
    System.out.println("Ingrese la matricula: ");
    String placa2 = input.nextLine();
    placa2 = input.nextLine();

    System.out.println("CAMION 2: ");
    System.out.println("Ingrese la velocidad: ");
    float vel3 = input.nextFloat();
    while(vel3 < 0){
      try{
        if(vel3 < 0){
          throw new ValorInvalidoException();
        }
      }catch(ValorInvalidoException e){
        System.out.println(e.toString());
        System.out.println("Ingrese la velocidad: ");
        vel3  = input.nextFloat();

      }finally{
        System.out.println();
      }
    }
    System.out.println("Ingrese la matricula: ");
    String placa3 = input.nextLine();
    placa3 = input.nextLine();

    Scanner input4 = new Scanner(System.in);
    System.out.println("REMOLQUE: ");
    System.out.println("Ingrese la carga maxima: ");
    Double pMax = input4.nextDouble();
    System.out.println("Ingrese la altura: ");
    Double alto = input4.nextDouble();
    System.out.println("Ingrese el ancho: ");
    Double ancho = input4.nextDouble();
    System.out.println("Ingrese el largo: ");
    Double largo = input4.nextDouble();
    
    Auto a1 = new Auto(puertas, placa);
    Camion c1 = new Camion(placa2);
    Camion c2 = new Camion(placa3);
    Remolque r = new Remolque(pMax, alto, ancho, largo);
    
    a1.setVelocidad(vel);
    c1.setVelocidad(vel2);
    c2.setVelocidad(vel3);

    a1.acelerar(10);
    c1.acelerar(10);
    c2.ponerRemolque(r);
    a1.acelerar(10);
    a1.frenar(30);

    System.out.println(a1.toString());
    System.out.println(c1.toString());
    System.out.println(c2.toString());
    c2.acelerar(90);
    System.out.println(c2.toString());
  }
}
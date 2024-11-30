import paqueteFiguras.Circle;
import paqueteFiguras.Cylinder;
import paqueteFiguras.Point2D;

public class testerShape {
    public static void main (String[] args) {
        Cylinder A = new Cylinder(5, -3.2, 4.84);
        double ar = A.calcularArea();
        double vol = A.calcularVolumen();
        String nom = A.shapeName();
        System.out.println("Area del cilindro: " + ar);
        System.out.println("Volumen del cilindro: " + vol);
        System.out.println("Nombre de la figura: " + nom);
        System.out.println("");
        Circle B = new Circle(0, 1, 5);
        double ar2 = B.calcularArea();
        double per = B.calcularPerimetro();
        String nom2 = B.shapeName();
        System.out.println("Area del cilindro: " + ar2);
        System.out.println("Volumen del cilindro: " + per);
        System.out.println("Nombre de la figura: " + nom2);
        System.out.println("");
        Point2D C = new Point2D(-5, 0.12);
        String nom3 = C.shapeName();
        System.out.println("Nombre de la figura: " + nom3);
    }
}

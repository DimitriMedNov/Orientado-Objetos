package paqueteFiguras;

public class Point2D extends Shape {
    protected double x, y;
    public Point2D () {
        this.x = 0;
        this.y = 0;
    }
    public Point2D (double x, double y) {
        this.x = x;
        this.y = y;
    }
    @Override
    public String shapeName(){
        return "Punto en 2D";
    }
    @Override
    public double calcularArea(){
        return 0;
    }
    @Override
    public double calcularPerimetro(){
        return 0;
    }
    @Override
    public double calcularVolumen(){
        return 0;
    }
}

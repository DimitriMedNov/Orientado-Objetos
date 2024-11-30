package paqueteFiguras;

public class Cylinder extends Circle {
    private double altura;
    public Cylinder(){
        this.x = 0;
        this.y = 0;
        this.altura = 1;
    }
    public Cylinder(double x, double y, double altura){
        this.x = x;
        this.y = y;
        this.altura = altura;
    }
    @Override
    public String shapeName(){
        return "Cilindro";
    }
    @Override
    public double calcularArea(){
        return ((super.calcularArea()) * 2 + (this.altura) * (super.calcularPerimetro()));
    }
    @Override
    public double calcularPerimetro(){
        return 0;
    }
    @Override
    public double calcularVolumen(){
        return (this.altura) * (super.calcularArea());
    }
}

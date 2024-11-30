package paqueteFiguras;

public class Circle extends Point2D {
    protected double radio;
    public Circle () {
        this.x = 0;
        this.y = 0;
        this.radio = 1;
    }
    public Circle (double x, double y, double radio) {
        super (x, y);
        this.radio = radio > 0 ? radio : 1;
    }
    @Override
    public String shapeName(){
        return "Circulo";
    }
    @Override
    public double calcularArea(){
        return (this.radio) * (this.radio) * (Math.PI);
    }
    @Override
    public double calcularPerimetro(){
        return (this.radio) * (2) * (Math.PI);
    }
    @Override
    public double calcularVolumen(){
        return 0;
    }
}

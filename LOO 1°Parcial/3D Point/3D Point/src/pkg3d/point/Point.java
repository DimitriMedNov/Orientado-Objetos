/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

package pkg3d.point;
//import  java.util.scanner
/**  
 *
 * @author Dimitri Medina Novelo
 */         
public class Point {
    
    private float  x, y, z, rx, ry, rz;
    
    public Point ( ) {
        this.x = 0;
        this.y = 0;
        this.z = 0;
        this.rx = 0;
        this.ry = 0;
        this.rz = 0;
    }
    public Point (float x, float y, float z ) {
        this.x = x;
        this.y = y;
        this.z = z;
    }
    public void transladar(float dx, float dy, float dz){
        this.x += dx;
        this.y +=  dy;
        this.z +=  dz;
     }
    //NO ENCONTRE LA FORMULA PARA PODER SACAR SENO Y COSENO PARA CADA COORDENADA
    /*public void angulos (float ax, float ay, float az) {
        rx = ((cos(y * 3.1416 / ay)) - (sin(z * 3.1416 / az))) / ((sin(y * 3.1416 / ay)) + (cos(z * 3.1416 / az)));
        ry = ((cos(z * 3.1416 / az)) - (sin(x * 3.1416 / ax))) / ((sin(z * 3.1416 / az)) + (cos(x * 3.1416 / ax)));
        rz = ((cos(x * 3.1416 / ax)) - (sin(y * 3.1416 / ay))) / ((sin(x * 3.1416 / ax)) + (cos(y * 3.1416 / ay)));
    }*/
    public void imprimir ( ) {
        System.out.println("(" + this.x + ","+ + this.y + ","+ + this.z + ")");
    }
    public static void main(String[] args) {
        System.out.println("X, Y, Z sin valores: ");
        Point p1 = new Point();
        p1.imprimir();
        System.out.println();
        System.out.println("X, Y, Z se encuentran en: ");
        Point p2 = new Point(-3.45f, 8.9f, 8.36f);
        //System.out.println(p2.imprimir());
        p2.imprimir();
        p2.transladar(-3.45f, 8.9f, 8.36f);
        System.out.println();
        System.out.println("Ahora X, Y, Z se desplazaron ha: ");
        p2.imprimir();
        System.out.println();
        float dx, dy, dz;
        float ax, ay, az;
        
        /*
         Scanner sc = new
        Scanner(System.in);
                System.out.println("Cuanto quieres de desplazamineto en x?   ");
                dx = sc.nextlnt();
        
         Scanner sc = new
        Scanner(System.in);
                System.out.println("Cuanto quieres de desplazamineto en y?   ");
                dy = sc.nextlnt();
        
         Scanner sc = new
        Scanner(System.in);
                System.out.println("Cuanto quieres de desplazamineto en z?   ");
                dz = sc.nextlnt();
        
        Scanner sc = new
        Scanner(System.in);
                System.out.println("Coloque el  angulo de x");
                ax = sc.nextlnt();
        
        Scanner sc = new
        Scanner(System.in);
                System.out.println("Coloque el  angulo de y");
                ay = sc.nextlnt();
        
        Scanner sc = new
        Scanner(System.in);
                System.out.println("Coloque el  angulo de z");
                az = sc.nextlnt();
        */
    }
}
//PROF LA VERDAD LE ESTUVE BUSCANDO Y NO ENCONTRE QUE MAS MOVERLE Y  
//POR MAS QUE LE HACIA SIEMPRE ME DABA ERROR A LA HORA DE PONERLE UN CIN>> 
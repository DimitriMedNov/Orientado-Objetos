/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

package TesterEmpleado;
import empleadospolimorfismo.Empleado;
import empleadospolimorfismo.Jefe;
import empleadospolimorfismo.EmpleadoPiezas;
import empleadospolimorfismo.TrabajadorComision;
import empleadospolimorfismo.TrabajadorPorHoras;
/**
 * 
 * @author Dimitri Medina Novelo
 */
public class TesterPolimorfismo {
    public static void main(String[] args) {
        Jefe jefe1 = new Jefe("Juan Perez", 40000);
            TrabajadorComision trabajador1 = new TrabajadorComision("Felipe Rodriguez", 5000, 0.3, 10000);
            EmpleadoPiezas empleado1 = new EmpleadoPiezas("Fulano de tal", 8000, 50);
            TrabajadorPorHoras empleado2= new TrabajadorPorHoras("Rodolfo",68,150);
            //mostramos que funciona con cada objeto
            System.out.println("*** PROBANDO CON OBJETOS ***");
            jefe1.imprimir();
            trabajador1.imprimir();
            empleado1.imprimir();
            empleado2.imprimir();
            //Ahora checamos el comportamiento polimorfico 
            System.out.println("*** PROBANDO CON POLIMORFISMO ***");
            Empleado empleado = jefe1;
            empleado.imprimir();
            empleado = trabajador1;
            empleado.imprimir();
            empleado = empleado1;
            empleado.imprimir();
            empleado = empleado2;
            empleado.imprimir();
    }
    
}
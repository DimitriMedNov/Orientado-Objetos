/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

package empleadospolimorfismo;

/**
 * 
 * @author Dimitri Medina Novelo
 */
public class TrabajadorComision extends Empleado {
    protected double salarioBase, porcentajeComision, montoVentas;

        public TrabajadorComision()
        {
            super();
            this.salarioBase = 0;
            this.porcentajeComision = 0;
            this.montoVentas = 0;
        }

        public TrabajadorComision(String nombre, double salario, double comision, double ventas) 
        {
            super(nombre);
            this.salarioBase = salario > 0 ? salario : 0;
            this.porcentajeComision = comision > 0 && comision <=1 ? comision : 0;
            this.montoVentas = ventas > 0 ? ventas : 0;
        }
        
        public double getSalarioBase()
        {
            return this.salarioBase;
        }
        
        public void setSalarioBase(double salario)
        {
            this.salarioBase = salario > 0 ? salario : 0;
        }

        public double getPorcentajeComision()
        {
            return this.porcentajeComision;
        }
        
        public void setPorcentajeComision(double comision)
        {
            this.porcentajeComision = comision > 0 && comision <= 1 ? comision : 0;
        }

        public double getMontoVentas()
        {
            return this.montoVentas;
        }
        
        public void setMontoVentas(double ventas)
        {
            this.montoVentas = ventas > 0 ? ventas : 0;
        }
        
        @Override
        public double pagoDiario()
        {
            return this.salarioBase + this.porcentajeComision + this.montoVentas;
        }
        
        @Override 
        public void imprimir()
        {
            System.out.println("Empleado tipo TRABAJADOR POR COMISION");
            System.out.println("NOMBRE: " + this.nombre + "\nSALARIO: " + this.salarioBase + "\nPORCENTAJE DE COMISION: " + this.porcentajeComision*100 + "\nMONTO DE VENTAS: " + this.montoVentas + "\nPAGO DIARIO: " + this.pagoDiario());
        }
}
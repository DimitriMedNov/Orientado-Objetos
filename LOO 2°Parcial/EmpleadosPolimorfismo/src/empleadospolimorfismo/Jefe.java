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
public class Jefe extends Empleado {
    protected double salarioSemanal;

        public Jefe()    
        {
            super();
            this.salarioSemanal = 0;
        }

        public Jefe(String nombre, double salario)
        {
            super(nombre);
            this.salarioSemanal = salario > 0 ? salario : 0;
        }
        
        public double getSalarioSemanal()
        {
            return this.salarioSemanal;
        }
        
        public void setSalarioSemanal(double salarioSemanal)
        {
           this.salarioSemanal = salarioSemanal > 0 ? salarioSemanal : 0;
        }

        @Override
        public double pagoDiario()
        {
            return this.salarioSemanal / 5;
        }

        @Override
        public void imprimir()
        {
            System.out.println("Empleado tipo JEFE");
            System.out.println("NOMBRE: " + this.nombre + "\nSALARIO: " + this.salarioSemanal + "\nPAGO DIARIO: " + this.pagoDiario());
        }
}
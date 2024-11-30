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
public abstract class Empleado {
        protected String nombre;

        public String getNombre(){
            return this.nombre;
        }
        
        public void setNombre(String nombre) {
            this.nombre = nombre;
        }

        public Empleado()
        {
            this.nombre = " ";
        }

        public Empleado(String nombre)
        {
            this.nombre = nombre;
        }
        
        public abstract double pagoDiario();
        public abstract void imprimir();
}
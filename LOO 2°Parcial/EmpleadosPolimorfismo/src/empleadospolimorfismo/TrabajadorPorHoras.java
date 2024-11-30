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
public class TrabajadorPorHoras extends Empleado{
        protected int HorasTrabajadas;
        protected double pagoXhora;
        
        public TrabajadorPorHoras()
        {
            super ();
            this.HorasTrabajadas = 0;
            this.pagoXhora = 0;
        }
        public TrabajadorPorHoras(String nombre, int cantidad, double pago) 
        {
            super(nombre);
            this.HorasTrabajadas = cantidad > 0 ? cantidad : 0;
            this.pagoXhora = pago > 0 ? pago : 0;
        }
        public int getHrsTrabajadas()
        {
            return this.HorasTrabajadas;
        }
        
        public void setHrsTrabajadas(int cantidad)
        {
            this.HorasTrabajadas = cantidad > 0 ? cantidad : 0;
        }
        
        public double getPagoxHora()
        {
            return this.pagoXhora;
        }
        
        public void setPagoxHora(double pago)
        {
            this.pagoXhora = pago > 0 ? pago : 0;
        }
        @Override
        public double pagoDiario()
        {
            return this.HorasTrabajadas * this.pagoXhora;
        }
        
        @Override
        public void imprimir()
        {
            System.out.println("Empleado tipo Trabajador por horas");
            System.out.println("NOMBRE: " + this.nombre + "\nPAGO POR HORA: " + this.pagoXhora + "\nCANTIDAD HORAS TRABAJADAS: " + this.HorasTrabajadas + "\nPAGO DIARIO: " + this.pagoDiario());
        }
}

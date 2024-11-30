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
public class EmpleadoPiezas extends Empleado {
        protected int cantidadPiezas;
        protected double pagoXPieza;

        public EmpleadoPiezas()
        {
            super ();
            this.cantidadPiezas = 0;
            this.pagoXPieza = 0;
        }

        public EmpleadoPiezas(String nombre, int cantidad, double pago) 
        {
            super(nombre);
            this.cantidadPiezas = cantidad > 0 ? cantidad : 0;
            this.pagoXPieza = pago > 0 ? pago : 0;
        }
        
        public int getCantidadPiezas()
        {
            return this.cantidadPiezas;
        }
        
        public void setCantidadPiezas(int cantidad)
        {
            this.cantidadPiezas = cantidad > 0 ? cantidad : 0;
        }
        
        public double getPagoXPieza()
        {
            return this.pagoXPieza;
        }
        
        public void setPagoXPieza(double pago)
        {
            this.pagoXPieza = pago > 0 ? pago : 0;
        }
        
        @Override
        public double pagoDiario()
        {
            return this.cantidadPiezas * this.pagoXPieza;
        }
        
        @Override
        public void imprimir()
        {
            System.out.println("Empleado tipo TRABAJADOR POR PIEZAS");
            System.out.println("NOMBRE: " + this.nombre + "\nPAGO POR PIEZA: " + this.pagoXPieza + "\nCANTIDAD DE PIEZAS: " + this.cantidadPiezas + "\nPAGO DIARIO: " + this.pagoDiario());
        }
}
/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

package personjava;

/**
 * 
 * @author Dimitri Medina Novelo
 */
public class Student extends Persona{
        private String nombre2; 
        private int semestre; 
        private double promedio;
        
        public Student(String nombre, String apellido, int edad, int day, int month, int year,String nombre2, int semestre, double promedio){
                super( nombre,  apellido,  edad,  day,  month,  year);
                this.setNombre2(nombre2);
                this.semestre=(semestre);
                this.promedio=(promedio);
        }
        public String getNombre2() { return this.nombre2; }
        public void setNombre2(String nombre2) { this.nombre2 = nombre2; }
        
        public int getSemestre() { return this.semestre; }
        public void setSemestre(int value) { this.semestre = semestre < 0 ? 0 : semestre; }
        
        public double getPromedio() { return this.promedio; }
        public void setPromedio(double value) { this.promedio = promedio < 0 ? 0 : promedio; }
        
        public void imprimir() {
        System.out.println(toString());
        System.out.print("PROGRAMA: " + this.nombre2 + "\nSEMESTRE: " + this.semestre + "\nPROMEDIO GLOBAL: " + this.promedio+"\n");
    }
}

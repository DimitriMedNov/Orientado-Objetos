/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

package MisClases;

/**
 * 
 * @author Dimitri Medina Novelo
 */
public class Persona {
    private String nombre, apellido;
    private int edad; 
    
    public String getNombre() { return this.nombre; }
    public void setNombre(String value) { this.nombre = value; }
    public String getApellido() { return this.apellido;  }
    public void setApellido(String value) { this.apellido = value;  }
    public int getEdad() { return this.edad;  } 
    public void setEdad(int value) { this.edad = value<0?0:value; }
    public Persona(String nombre, String apellido, int edad) {
        this.nombre = nombre;
        this.apellido = apellido;
        this.setEdad(edad);
    }
    public void Print() {
        System.out.print("NOMBRE: " + this.nombre + "\nAPELLIDO: " + this.apellido + "\nEDAD: " + this.edad);
        
    }
    @Override
    public String toString() {
        return "NOMBRE: " + this.nombre + "\nAPELLIDO: " + this.apellido + "\nEDAD: " + this.edad;
    }

}



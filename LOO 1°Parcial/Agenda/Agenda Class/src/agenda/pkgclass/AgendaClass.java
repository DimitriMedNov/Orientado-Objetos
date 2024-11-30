/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package agenda.pkgclass;
//import  java.util.scanner
/**
 *
 * @author Dimitri Medina Novelo
 */
public class AgendaClass {
    private String name, secondname, mail;
    
    public AgendaClass ( ){
        this.name = "*Sin informacion previa*";
        this.secondname = "*Sin informacion previa*";
        this.mail = "*Sin informacion previa*";
    }
    public AgendaClass (String name, String secondname, String mail) {
        this.name = name;
        this.secondname = secondname;
        this.mail = mail;
    }
    public void persona(String nombre, String apellido, String correo) {
        name = nombre;
        secondname = apellido;
        mail = correo;
    }
    public void imprimir() {
        System.out.println ("Nombre: "+ name + "\n" + "Apellido: " + secondname + "\n" + "Correo: " + mail + "\n" );
    }
    
    public static void main(String[] args) {
       
        //No se me ocurrio como implementar la clase meeting prof
        //PERSON
        System.out.println("Persona 1:  ");
        AgendaClass p1 = new AgendaClass();
        p1.imprimir();
        /*
        Scanner sc = new
        Scanner(System.in);
                System.out.println("Cual es el nombre de la persona?   ");
                nombre = sc.nextlnt();
        
         Scanner sc = new
        Scanner(System.in);
                System.out.println("Cuales son sus apellidos?   ");
                apellido = sc.nextlnt();
        
         Scanner sc = new
        Scanner(System.in);
                System.out.println("Cual es su correo?   ");
                correo = sc.nextlnt();
        
        System.out.println("Persona 2:  ");
        AgendaClass p2 = new AgendaClass();
        p2.persona(nombre, apellido, correo);
        p2.imprimir();

        */
    }
}


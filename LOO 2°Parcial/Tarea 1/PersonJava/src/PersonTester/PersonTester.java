/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

package PersonTester;
import personjava.Persona;
import personjava.Student;
import personjava.Teacher;
import personjava.Course;
/**
 * 
 * @author Dimitri Medina Novelo
 */
public class PersonTester {
    public static void main(String []args){
        Persona p1 = new Persona("Leonel", "Messi", 33,24,6,1987);
        System.out.println("\n*********** PERSON **************");
        System.out.println(p1.toString() );
        
        Student s1 = new Student("Cristiano", "Ronaldo", 36, 5, 2, 1985,"Delantero de la Juve",9,10);
        System.out.println("\n*********** STUDENT **************");
        s1.imprimir();
        Course c1 = new Course("Lenguaje Orientado a Objetos", "SIS1402", 6);
        Teacher t1 = new Teacher("Zinedine", "Zidane", 48, 23, 6, 1972, "Doctorado", "Tiempo Completo", c1);
        System.out.println("\n*********** TEACHER **************");
        t1.imprimir();
    }
}

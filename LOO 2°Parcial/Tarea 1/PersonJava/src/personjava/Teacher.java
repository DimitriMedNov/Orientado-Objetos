/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

package personjava;
import  personjava.Course;

/**
 * 
 * @author Dimitri Medina Novelo
 */
public class Teacher extends Persona {
        private String grade;
        private String type;
        private Course curso;
        //private String course;
        
        public Teacher(String nombre, String apellido, int edad, int day, int month, int year,String grade, String type, Course curso){
                super( nombre,  apellido,  edad,  day,  month,  year);
                this.setGrade(grade);
                this.setType(type);
                this.curso = curso;
                //this.setCourse(course);
        }
        public String getGrade() { return this.grade; }
        public void setGrade(String grade) { this.grade = grade; }
        
        public String getType() { return this.type; }
        public void setType(String type) { this.type = type; }
        
        public Course getCurso() {return this.curso;}
       /* public String getCourse() { return this.course; }
        public void setCourse(String course) { this.course = course; }*/
        
        //@Override
        public void imprimir() {
        System.out.println(toString());
        System.out.print("GRADO ACADEMICO: " + this.grade + "\nTIPO DE DOCENTE: " + this.type);
        this.curso.imprimir();
    }
}

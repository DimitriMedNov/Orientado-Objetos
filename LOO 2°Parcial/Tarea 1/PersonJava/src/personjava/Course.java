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
public class Course {
    private String courseName, nrc; 
    private int cr;
    
    public Course(String courseName, String nrc, int cr) {
        this.setCourseName(courseName);
        this.setNRC(nrc);
        this.cr=(cr);
    }
    public String getCourseName() { return this.courseName; }
    public void setCourseName(String value) { this.courseName = value; }
    
    public String getNRC() { return this.nrc; }
    public void setNRC(String value) { this.nrc = value; }
    
    public int getCR() { return this.cr; }
    public void setCR(int value) { this.cr = cr < 0 ? 0 : cr; }
    
    public void imprimir() {
        System.out.print("\nMATERIA: " + this.courseName + "\nNRC: " + this.nrc+ "\nCREDITOS: " + this.cr+"\n");
    }
}

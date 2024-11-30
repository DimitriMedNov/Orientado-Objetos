/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package testers;
import ejemplosalumnos.Date;
/**
 *
 * @author MedNo
 */
public class DateTester {
        public static void main(String[ ] args) {
                Date d1 = new Date();
                Date d2 = new Date(1,1,1);
                System.out.println(d1.toString() );
                System.out.println(d2.toString() );
                d2.increaseDay();
                System.out.println(d2.toString() );
                Date d3 = new Date(2020,12,31);
                System.out.println(d3.toString() );
                d3.increaseDay();
                System.out.println(d3.toString() );
        
        }
        
}

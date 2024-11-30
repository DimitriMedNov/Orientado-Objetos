/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

package othello;
import othello.Othello;
import othello.LugarInvalido;
import othello.EntradaIncorrecta;
import othello.Constants;
import java.util.Scanner;

/**
 *
 * @author Los Mikes 
 */

public class TesterOthello {
        public static void main(String[] args) {
            
        Scanner scan = new Scanner(System.in);
        Othello game = new Othello();
        
        int x, y, indice;
        
        while (true)
        {
            game.print();
            System.out.println ("X:");
            x = scan.nextInt();
            System.out.println ("Y:");
            y = scan.nextInt();
            indice = 8 * y + x;
            try
            {
                if (!game.setFicha(indice))
                    throw new LugarInvalido();

            }
            catch (LugarInvalido e)
            {

            }
        }
    }
}

/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package othello;
import java.util.ArrayList;
import java.util.List;
import othello.Constants;

/**
 *
 * @author Los Mikes
 */
public class Othello extends Constants {
    
    // elementos
    public static boolean[]m_blanco = new boolean[64]; // movement white
    public static boolean[]m_negro = new boolean[64];

    public static boolean m_jugador;

    //funciones

    Othello() 
    {  
        m_jugador = NEGRO;
        for (int x = 0;  x < 64; ++x)
        {
            m_blanco[x] = false;
            m_negro[x] = false;
        }
        m_blanco[27] = true;
        m_blanco[36] = true;
        m_negro[28] = true;
        m_negro[35] = true;
    }

    int getFicha(int indice)
    {
        if (m_blanco[indice])
            return FICHA_BLANCA;
        if (m_negro[indice])
            return FICHA_NEGRA;
        return FICHA_VACIA;
    }

    boolean esFichaPosible(int indice, boolean jugador)
    {
        for (int x = 0; x < 8; ++x)
        {
            if (funcionRecursiva(indice, jugador, x, 0, false))
                return true;
        }

        return false;
    }

    boolean setFicha(int indice)
    {
        boolean posible = false;
        for (int x = 0; x < 8; ++x)
            if (funcionRecursiva(indice, m_jugador, x, 0, true))
                posible = true;
        if (posible)
        {
            m_blanco[indice] = m_jugador == BLANCO;
            m_negro[indice] = m_jugador == NEGRO;
            cambiarJugador();
        }
        return posible;
    }

    String marcador()
    {
        String str;
        int pts_blanco = 0;
        int pts_negro = 0;
        for (int i = 0; i < 64; ++i)
        {
            if (m_blanco[i])
                pts_blanco++;
        }
        for (int i = 0; i < 64; ++i)
        {
            if (m_negro[i])
                pts_negro++;
        }
        str = "Marcador |BLANCO: " + (pts_blanco) +" |" + "NEGRO: " + (pts_negro) + " |";
        return str;
    }

    void print()
    {
        int indice = 0;
        System.out.println(" | 0 | 1 | 2 | 3 | 4 | 5 | 6 | 7 |" );
        //cout << "----------------------------------" << endl;
        for (int x = 0; x < 8; ++x)
        {
            System.out.print( x + "|");
            for (int y = 0; y < 8; ++y)
            {
                if (m_blanco[indice])
                {
                    System.out.print(" N |");
                    indice ++;
                    continue;
                }
                if (m_negro[indice])
                {
                    System.out.print(" B |");
                    indice++;
                    continue;
                }
                if (esFichaPosible(indice, m_jugador))
                {
                    System.out.print(" X |");
                    indice++;
                    continue;
                }

                System.out.print("   |");
                indice++;

            }
            System.out.println();
        }

        System.out.println("----------------------------------");
        System.out.println(marcador());
        System.out.println("----------------------------------");
        System.out.println(m_jugador == NEGRO ? "Turno del negro" : "Turno del blanco ");
    }

    boolean funcionRecursiva(int indice, boolean jugador, int direccion, int profundidad, boolean lugar)
    {
        int x = indice % 8 + X_OFFSET[direccion];
        int y = indice / 8 + Y_OFFSET[direccion];
        if (x < 0 || x >= 8 || y < 0 || y >= 8)
            return false;
        indice = 8 * y + x;
        if (getFicha(indice) == FICHA_VACIA)
            return false;
        if (getFicha(indice) == (jugador == BLANCO ? FICHA_BLANCA : FICHA_NEGRA))
            return profundidad > 0;
        boolean posible = funcionRecursiva(indice, jugador, direccion, profundidad + 1, lugar);
        if (lugar && posible)
        {
            m_blanco[indice] = jugador == BLANCO;
            m_negro[indice] = jugador == NEGRO;
        }
        return posible;
    }

    void cambiarJugador()
    {
        m_jugador = !m_jugador;
    }
    
}

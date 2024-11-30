
#include "Othello.h"
#include "Constants.h"

using namespace std;

Othello ::Othello()  : m_jugador(NEGRO)
{
    for (int x = 0; x < 64; ++x)
    {
        m_blanco[x] = false;
        m_negro[x] = false;
    }
    m_blanco[27] = true;
    m_blanco[36] = true;
    m_negro[28] = true;
    m_negro[35] = true;
}

Othello ::~Othello() {}

int Othello ::getFicha(int indice)
{
    if (m_blanco[indice])
        return FICHA_BLANCA;
    if (m_negro[indice])
        return FICHA_NEGRA;
    return FICHA_VACIA;
}

bool Othello ::esFichaPosible(int indice, bool jugador)
{
    for (int x = 0; x < 8; ++x)
    {
        if (funcionRecursiva(indice, jugador, x, 0, false))
            return true;
    }

    return false;
}

bool Othello :: setFicha(int indice)
{
    int posible = false;
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

string Othello :: marcador()
{
    string str;
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
    str = "Marcador |BLANCO: " + to_string(pts_blanco) +" |" + "NEGRO: " + to_string(pts_negro) +" |";
    return str;
}

void Othello ::print()
{
    int indice = 0;
    cout << "Bienvenido a nuestro juego, espero que se diviertan. Si quieres finalizar el juuego presiona una letra al inicio del turno. ¡Disfruta!" << endl << endl;
    cout << " | 1 | 2 | 3 | 4 | 5 | 6 | 7 | 8 |" << endl;
    for (int x = 0; x < 8; ++x)
    {
        cout << x+1 << "|";
        for (int y = 0; y < 8; ++y)
        {
            if (m_blanco[indice])
            {
                cout << " N |";
                indice ++;
                continue;
            }
            if (m_negro[indice])
            {
                cout << " B |";
                indice++;
                continue;
            }
            if (esFichaPosible(indice, m_jugador))
            {
                cout << " X |";
                indice++;
                continue;
            }
            cout << "   |";
            indice++;

        }
        cout << endl;
    }

    cout << "----------------------------------" << endl;
    cout << marcador() << endl;
    cout << "----------------------------------" << endl;
    cout << (m_jugador == NEGRO ? "Turno del negro" : "Turno del blanco ") << endl;
}

bool Othello ::funcionRecursiva(int indice, bool jugador, int direccion, int profundidad, bool lugar)
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
    bool posible = funcionRecursiva(indice, jugador, direccion, profundidad + 1, lugar);
    if (lugar && posible)
    {
        m_blanco[indice] = jugador == BLANCO;
        m_negro[indice] = jugador == NEGRO;
    }
    return posible;
}

void Othello ::cambiarJugador()
{
    m_jugador = !m_jugador;
}


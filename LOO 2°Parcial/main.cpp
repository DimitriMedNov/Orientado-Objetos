#include <iostream>
#include "Othello.h"
#include "Constants.h"
#include "LugarInvalido.h"
#include "EntradaIncorrecta.h"

using namespace std;

int main() {

    Othello game;

    int x, y, indice;


    while (game.jugadas < 1000)
    {
        game.print();
        cout << "X:";
        cin >> x;
        if (x == 0)
        {
            cout << "FIN DEL JUEGO" << endl;
            cout << "Marcador final:" << endl;
            cout << game.marcador();
            cout << "\n\n";
            return 0;
        }
        cout << "Y:";
        cin >> y;
        indice = 8 * (y-1) + (x-1);
        try
        {
            game.jugadas++;
            if (!game.setFicha(indice))
                throw LugarInvalido();

        }
        catch (LugarInvalido e)
        {
            cout << e.what() << endl;
        }
    }
    return 0;
}
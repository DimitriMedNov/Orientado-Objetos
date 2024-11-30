#ifndef UNTITLED_OTHELLO_H
#define UNTITLED_OTHELLO_H
#include "Constants.h"
#include <iostream>
#pragma once

using namespace std;

class Othello{
public:
    int jugadas = 0;

private:
    // elementos
    bool m_blanco[64];
    bool m_negro[64];
    bool m_jugador;

public:
    //constructor y destructor
    Othello();
    ~Othello();
    //funciones
    int getFicha(int indice);
    bool esFichaPosible(int indice, bool jugador);
    bool setFicha(int indice);
    string marcador();
    void print(); // imprime el tablero
private:
    bool funcionRecursiva(int indice, bool jugador, int direccion, int profundidad, bool lugar);
    void cambiarJugador(); // encargado de hacer el cambio de turno
};

#endif //UNTITLED_OTHELLO_H
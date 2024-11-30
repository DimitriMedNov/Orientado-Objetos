#include "PlayerAI.h"
#include "GUI.h"
#include<iostream>
#include "SDL_Button.h"
#include<SDL_image.h>
#include<SDL_ttf.h>
#pragma once	
class Reversi:PlayerAI
{ 
	SDL_Event event;
	GUI *gui;
	enum{START_MENU_SCREEN=3,GAME_SCREEN,GAME_OVER_SCREEN,COIN_SELECTION_SCREEN,QUIT};
	int side;
	int white;
	int black;
	Board board;
public:
	Reversi(void);
	int RunGame();
	void InitializeGame(Board &board,int size);
	int GetHumanMove(Board &board,int Side);
	int GetComputerMove(Board &board,int Side);
	int start_menu_screen();
	int game_over_screen();
	int coin_selection_screen();
	void stateMachine(int screen=START_MENU_SCREEN);
	~Reversi(void);
};


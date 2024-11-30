#pragma once
#include<iostream>
#include<SDL.h>
#include<SDL_image.h>
#include "essentials.h"
#include "SDL_Button.h"
class GUI:essentials
{
	SDL_Surface *screen,*coin_black,*coin_white,*block,*possible_move;
	int EXIT;
	SDL_Event event;
	
public:
	GUI(int width,int height,int bpp,int flag);
	void mainLoop();
	void initializeBoardGUI();
	void putWhite(int x,int y);
	void putBlack(int x,int y);
	void putPossible(int x,int y);
	void updateBoardGUI(Board &board);
	void stateMachine();
	~GUI(void);
};


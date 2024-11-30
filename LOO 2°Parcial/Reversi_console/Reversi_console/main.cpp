#include"Reversi.h"
#include<conio.h>
#include<SDL.h>
int main(int args,char **argv)
{
	Reversi game;
	//game.RunGame();
	game.stateMachine();
	
	return 0;
}
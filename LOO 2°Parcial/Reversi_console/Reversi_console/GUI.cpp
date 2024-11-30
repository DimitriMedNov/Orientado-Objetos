#include "GUI.h"


GUI::GUI(int width,int height,int bpp,int flag)
{
	SDL_Init(SDL_INIT_EVERYTHING);
	SDL_WM_SetCaption( "REVERSI", NULL );
	this->screen=SDL_SetVideoMode(width,height,bpp,flag);
	this->EXIT=0;
	this->coin_black=IMG_Load("coin_black.jpg");
	this->coin_white=IMG_Load("coin_white.jpg");
	this->block=IMG_Load("block.jpg");
	this->possible_move=IMG_Load("possible_block.jpg");
}
void GUI::mainLoop()
{
	SDL_Rect rect;
	rect.x=rect.y=50;
	while(!EXIT)
	{
		initializeBoardGUI();
		while(SDL_PollEvent(&event))
		{
			switch(event.type)
			{
			case SDL_QUIT:
				EXIT=1;
				break;
			}
		}
		//putBlack(50,50);
		//putWhite(100,100);
		
		SDL_Flip(screen);
	}
}
void GUI::initializeBoardGUI()
{
	SDL_Rect block_postion={0,0};
	for(int row=0;row<8;row++)
	{
		for(int col=0;col<8;col++)
		{
			SDL_BlitSurface(block,NULL,screen,&block_postion);
			block_postion.x+=block->w;
		}	
		block_postion.y+=block->h;
		block_postion.x=0;
	}
}
void GUI::updateBoardGUI(Board &board)
{
	SDL_Rect postion;
	for(int row=0;row<8;row++)
	{
		for(int col=0;col<8;col++)
		{
			postion.x=col*50;
			postion.y=row*50;
			if(board.board[row][col]==EMPTY)
			{
				SDL_BlitSurface(block,NULL,screen,&postion);
			}
			else if(board.board[row][col]==BLACK)
			{
				putBlack(postion.x,postion.y);
			}
			else
			{
				putWhite(postion.x,postion.y);
			}	
		}
	}
}
void GUI::putWhite(int x,int y)
{
	SDL_Rect position;
	position.x=x;
	position.y=y;
	SDL_BlitSurface(coin_white,NULL,screen,&position);
}

void GUI::putBlack(int x,int y)
{
	SDL_Rect position;
	position.x=x;
	position.y=y;
	SDL_BlitSurface(coin_black,NULL,screen,&position);
}
void GUI::putPossible(int x,int y)
{
	SDL_Rect position;
	position.x=x;
	position.y=y;
	SDL_BlitSurface(possible_move,NULL,screen,&position);
}
GUI::~GUI(void)
{
	SDL_FreeSurface(coin_black);
	SDL_FreeSurface(coin_white);
	SDL_FreeSurface(block);
	SDL_Quit();
}


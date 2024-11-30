#include "Reversi.h"


Reversi::Reversi(void)
{
	this->gui=new GUI(400,400,32,SDL_SWSURFACE);
}
int Reversi::RunGame()
{
	this->white=this->black=0;
	
	InitializeGame(board,8);
	gui->initializeBoardGUI();
	gui->updateBoardGUI(board);
	PrintBoard(board);
	int GameOver=0;
	int isGameOver=0;
	int humanSide=this->side;
	int computerSide=humanSide^1;
	int returnValue=0;
	int no_moves_to_make=0;
	if(humanSide==BLACK)
	{
		returnValue=GetHumanMove(board,BLACK);
		if(returnValue==1)
		{
			side=WHITE;
			gui->updateBoardGUI(board);
		}
	}
	else if(humanSide==WHITE)
	{
		returnValue=GetComputerMove(board,BLACK);
		if(returnValue==1)
		{
			side=WHITE;
			gui->updateBoardGUI(board);
		}
	}

	while(!GameOver)
	{
		
		while(SDL_PollEvent(&event))
		{
			switch(event.type)
			{
			case SDL_QUIT:
				GameOver=1;
				return QUIT;
				break;
			}	
		}
		if(side==humanSide)
		{
			returnValue=GetHumanMove(board,side);
			if(returnValue==1)
			{
				side=side^1;
				gui->updateBoardGUI(board);
				no_moves_to_make=0;
			}
		}
		if(side==computerSide)
		{
			returnValue=GetComputerMove(board,side);
			if(returnValue==1)
			{
				side=side^1;
				gui->updateBoardGUI(board);
				no_moves_to_make=0;
			}
		}
		if(returnValue==-1)
		{
			no_moves_to_make++;
			side=side^1;
			returnValue=0;
		}
		if(no_moves_to_make>=2)
		{
			return GAME_OVER_SCREEN;
		}

		SDL_Flip(SDL_GetVideoSurface());

	}
	
}
int Reversi::GetComputerMove(Board &board,int Side)
{
	positons=0;
	noofdraws=0;
	nofwins=0;
	nooflosses=0;
	std::vector<Move> moveList;
	std::vector<Move> moveDirection;
	GenerateMoveList(board,Side^1,moveList,moveDirection);
	if(moveList.size() == 0)
	{
		return -1;
	}
	return MiniMax(board,Side,7,0,-100,+100);
}
int Reversi::GetHumanMove(Board &board,int Side)
{	
	int row;
	int col;
	int x,y;
	std::vector<Move> moveList;
	std::vector<Move> moveDirection;
	std::vector<Move> moveListNoDuplictes;
	GenerateMoveList(board,Side^1,moveList,moveDirection);
	MoveListWithOutDuplicates(moveList,moveListNoDuplictes);

	if(moveList.size() == 0)
	{
		return -1;
	}

//	std::cout<<"\n\nPossible move are: \n";
	
	for(int i=0;i<moveListNoDuplictes.size();i++)
	{
	//	std::cout<<moveListNoDuplictes[i].row<<" "<<moveList[i].col<<"\n";
		gui->putPossible(moveListNoDuplictes[i].col*50,moveListNoDuplictes[i].row*50);
	}
	if(event.type==SDL_MOUSEBUTTONDOWN)
	{
		x=event.motion.x;
		y=event.motion.y;
		row=y/50;
		col=x/50;
		Move myMove={row,col};
		int validMove=0;
		for(int i=0;i<moveListNoDuplictes.size();i++)
		{
			if(moveListNoDuplictes[i].row==myMove.row && moveListNoDuplictes[i].col==myMove.col)
			{
				validMove=1;
			}
		}
		if(validMove)
		{	
			//std::cout<<"\nVALID MOVE";
			MakeMove(board,Side,myMove,moveList,moveDirection);
			return 1;
		}
		return 0;
	}
	//return 0;
	
}
void Reversi::InitializeGame(Board &board,int size)
{
	board.size=size;
	for(int row=0;row<board.size;row++)
	{
		for(int col=0;col<board.size;col++)
		{
			board.board[row][col]=EMPTY;
		}
	}

	board.board[board.size/2-1][board.size/2-1]=WHITE;
	board.board[board.size/2-1][board.size/2]=BLACK;
	board.board[board.size/2][board.size/2-1]=BLACK;
	board.board[board.size/2][board.size/2]=WHITE;
}
int Reversi::start_menu_screen()
{

	int quit=0;
	SDL_Button play_button;
	play_button.Button_SetTextColor(255,255,255);
	play_button.Button_SetText("PLAY","sys.ttf",20);

	
	SDL_Button quit_button;
	quit_button.Button_SetPositon(play_button.Button_GetX(),play_button.Button_GetY()+70);
	quit_button.Button_SetTextColor(255,255,255);
	quit_button.Button_SetText("QUIT","sys.ttf",20);
	
	SDL_Surface *background=IMG_Load("back2.jpg");
	SDL_BlitSurface(background,NULL,SDL_GetVideoSurface(),NULL);

	SDL_Surface *text;
	SDL_Rect postion={100,50,0,0};
	TTF_Init();
	TTF_Font *font=TTF_OpenFont("iyn.ttf",40);
	SDL_Color color={255,255,255};
	text = TTF_RenderText_Blended(font,"REVERSI",color);
	
	SDL_BlitSurface(text,NULL,SDL_GetVideoSurface(),&postion);

	SDL_Button white_button;
	white_button.Button_SetTextColor(255,255,255);
	//white_button.Button_SetText("PLAY","sys.ttf",20);

	while(!quit)
	{
		
		play_button.Botton_Show(event);
		quit_button.Botton_Show(event);
		while(SDL_PollEvent(&event))
		{
			
			switch(event.type)
			{
			case SDL_QUIT:
				return QUIT;
				break;
			}	
		}
		if(play_button.Button_onMoveOver())
		{
			play_button.Button_SetBackgroundColor(7,62,135);		
		}
		else
		{
			play_button.Button_SetBackgroundColor(131,158,195);
			
		}
		if(play_button.Button_OnClick())
		{
			return COIN_SELECTION_SCREEN;
		}



		if(quit_button.Button_onMoveOver())
		{
			quit_button.Button_SetBackgroundColor(7,62,135);
		}
		else
		{
			quit_button.Button_SetBackgroundColor(131,158,195);	
		}
		if(quit_button.Button_OnClick())
		{
			return QUIT;
		}

		SDL_Flip(SDL_GetVideoSurface());
	}
	
	

}
int Reversi::game_over_screen()
{
	int quit=0;
	int white=0,black=0;
	
	//count for number of whites and blacks
	for(int row=0;row<8;row++)
	{
		for(int col=0;col<8;col++)
		{
			if(board.board[row][col]==WHITE)
			{
				white++;
			}
			if(board.board[row][col]==BLACK)
			{
				black++;
			}
		}
	}

	SDL_Surface *alpha=SDL_CreateRGBSurface(SDL_SWSURFACE,SDL_GetVideoSurface()->w ,SDL_GetVideoSurface()->h,32,100,0,0,0);
	SDL_SetAlpha(alpha,SDL_SRCALPHA,100);
	SDL_BlitSurface(alpha,NULL,SDL_GetVideoSurface(),NULL);
	SDL_FreeSurface(alpha);


	SDL_Surface *text;
	SDL_Rect postion={110,110,0,0};
	TTF_Init();
	TTF_Font *font=TTF_OpenFont("sys.ttf",30);
	SDL_Color color={255,255,255};

	SDL_Rect rect={100,100,200,50};
	SDL_FillRect(SDL_GetVideoSurface(),&rect,SDL_MapRGB(SDL_GetVideoSurface()->format,30,144,255));

	if(white>black)
	{
		text = TTF_RenderText_Blended(font," WHITE WINS!",color);
	}
	else if(black>white)
	{
		text = TTF_RenderText_Blended(font," BLACK WINS!",color);
	}
	else
	{
		text = TTF_RenderText_Blended(font," ITS A DRAW!",color);
	}
	SDL_BlitSurface(text,NULL,SDL_GetVideoSurface(),&postion);

	SDL_Button play_button;
	play_button.Button_SetTextColor(255,255,255);
	play_button.Button_SetText("PLAY AGAIN","sys.ttf",20);
	play_button.Button_SetWH(200,50);
	play_button.Button_SetPositon(play_button.Button_GetX()-50,play_button.Button_GetY());
	

	
	while(!quit)
	{
		play_button.Botton_Show(event);
		while(SDL_PollEvent(&event))
		{
			switch(event.type)
			{
			case SDL_QUIT:
				return QUIT;
			}
		}
		if(play_button.Button_onMoveOver())
		{
			play_button.Button_SetBackgroundColor(255,153,204);
		}
		else
		{
			play_button.Button_SetBackgroundColor(127,76,102);
		}

		if(play_button.Button_OnClick())
		{
			return  START_MENU_SCREEN;
		}

		SDL_Flip(SDL_GetVideoSurface());
	}
}
int Reversi::coin_selection_screen()
{
	
	int quit=0;
	SDL_Surface *text;
	SDL_Rect postion={100,50,0,0};
	SDL_Surface *background = IMG_Load("back.jpg");
	SDL_BlitSurface(background,NULL,SDL_GetVideoSurface(),NULL);
	TTF_Init();
	TTF_Font *font=TTF_OpenFont("iyn.ttf",40);
	SDL_Color color={255,255,255};
	text = TTF_RenderText_Blended(font,"",color);
	SDL_BlitSurface(text,NULL,SDL_GetVideoSurface(),&postion);
	
	
	SDL_Button  white_button;
	white_button.Button_SetPositon(white_button.Button_GetX()+80,white_button.Button_GetY()+100);
	white_button.Button_SetTextColor(255,255,255);
	white_button.Button_SetText("WHITE","sys.ttf",20);
	
	SDL_Button  black_button;
	black_button.Button_SetPositon(white_button.Button_GetX()-183,white_button.Button_GetY());
	black_button.Button_SetTextColor(255,255,255);
	black_button.Button_SetText("BLACK","sys.ttf",20);

	SDL_Surface *image = IMG_Load("coins.png");
	SDL_Rect position={50,150,0,0};
	SDL_BlitSurface(image,NULL,SDL_GetVideoSurface(),&position);
	
	while(!quit)
	{
	
		white_button.Botton_Show(event);
		black_button.Botton_Show(event);
		while(SDL_PollEvent(&event))
		{	
			
			switch(event.type)
			{

			case SDL_QUIT:
					return QUIT;
				break;
			};	
		}

		if(white_button.Button_onMoveOver())
		{
			white_button.Button_SetBackgroundColor(49,42,37);
		}
		else
		{
			white_button.Button_SetBackgroundColor(99,85,74);
		}
		if(white_button.Button_OnClick())
		{
			side=WHITE;
			return GAME_SCREEN;																																																								
		}


		if(black_button.Button_onMoveOver())
		{
			black_button.Button_SetBackgroundColor(49,42,37);
		}
		else
		{
			black_button.Button_SetBackgroundColor(99,85,74);
		}
		if(black_button.Button_OnClick())
		{
			side=BLACK;
			return GAME_SCREEN;		
		}


		SDL_Flip(SDL_GetVideoSurface());
	}
}
void Reversi::stateMachine(int screen)
{		
		int returned_value=screen;
		while(returned_value != QUIT)
		{
			switch(returned_value)
			{
			case START_MENU_SCREEN:
				returned_value = start_menu_screen();
				break;
			case GAME_SCREEN:
				returned_value = RunGame();
				break;
			case COIN_SELECTION_SCREEN:	
				returned_value =  coin_selection_screen();
				break;
			case GAME_OVER_SCREEN:
				returned_value = game_over_screen();
				break;			
			};
		}
}
Reversi::~Reversi(void)
{
}

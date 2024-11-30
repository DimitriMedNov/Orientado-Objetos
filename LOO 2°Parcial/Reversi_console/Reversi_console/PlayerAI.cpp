#include "PlayerAI.h"
#include<Windows.h>
PlayerAI::PlayerAI(void)
{
	this->positons=0;
	this->nofwins=0;
	this->nooflosses=0;
	this->noofdraws=0;
}
int PlayerAI::MiniMax(Board & board,int Side,int maxDepth,int currentDepth,int alpha,int beta)
{
	Move bestMove={-1,-1};
	int bestScore=0;
	int score;
	std::vector<Move> moveList;
	std::vector<Move> moveDirection;
	std::vector<Move> moveListNoDuplicates;
	if(currentDepth == maxDepth)
		return evaluate(board,Side);
	
	if(Side == BLACK)
		bestScore=alpha;
	else
		bestScore=beta; 

	GenerateMoveList(board,Side^1,moveList,moveDirection);
	MoveListWithOutDuplicates(moveList,moveListNoDuplicates);

	Board tempBoard=board;
	for(int index=0;index<moveListNoDuplicates.size();index++)
	{
		positons++;
		MakeMove(board,Side,moveListNoDuplicates[index],moveList,moveDirection);
		score=MiniMax(board,Side^1,maxDepth,currentDepth+1,alpha,beta);
		board=tempBoard;
		if(Side==BLACK)
		{
			if(score>bestScore)
			{
				alpha=bestScore=score;
				bestMove=moveListNoDuplicates[index];
			}
		}
		else
		{
			if(score<bestScore)
			{
				beta=bestScore=score;
				bestMove=moveListNoDuplicates[index];
			}
		}
		if(alpha>=beta)
		{
			return bestScore;
		}
	}
	if(moveList.size()==0)
	{
		bestScore=evaluate(board,Side);							
	}
	if(currentDepth!=0)
	{
		return bestScore;
	}
	else
	{
		bestScore=score;
		this->bestMove=bestMove;
		MakeMove(board,Side,bestMove,moveList,moveDirection);
		return 1;
	}
	
}
void PlayerAI::MakeMove(Board &board,int Side,Move move,std::vector<Move> &moveList,std::vector<Move> &moveDirection)
{
	
	for(auto i=0;i<moveList.size();i++)
	{
		if(moveList[i].row==move.row  && moveList[i].col==move.col)
		{
			int r=moveDirection[i].row-move.row;
			int c=moveDirection[i].col-move.col;
			int row=move.row;
			int col=move.col;
			while(true)
			{
				row+=r;
				col+=c;
				if(board.board[row][col]==Side)
				{
					break;
				}
				board.board[row][col]=Side;
			}			
		}
	}
	board.board[move.row][move.col]=Side;
}
essentials::Move PlayerAI::GetBestMove()
{
	return this->bestMove;
}
void PlayerAI::GenerateMoveList(Board &board,int Side,std::vector<Move> &moveList,std::vector<Move> &moveDirection)
{	

	for(int row=0;row<board.size;row++)
	{
		for(int col=0;col<board.size;col++)
		{
			if(board.board[row][col]==Side)
			{
				LookAround(board,Side,moveList,moveDirection,row,col);
			}
		}
	}
}
void PlayerAI::LookAround(Board &board,int Side,std::vector<Move> &moveList,std::vector<Move> &moveDirection,int row,int col)
{
	for(int r=-1;r<2;r++)
	{
		if(row+r<0 || row+r>=board.size)
		{
			continue;
		}

		for(int c=-1;c<2;c++)
		{
			if(col+c<0 || col+c>=board.size)
			{
				continue;
			}

			if(board.board[row+r][col+c]==EMPTY)
			{
				if(IsMovePossible(board,Side,row+r,col+c,-r,-c))
				{
					Move move;
					move.row=row+r;
					move.col=col+c;
					moveList.push_back(move);
					move.row=row;
					move.col=col;
					moveDirection.push_back(move);
				}
			}
		}
	}
}
int PlayerAI::IsMovePossible(Board &board,int Side,int row,int col,int r,int c)
{		int temp_row=row;
		int temp_col=col;
		while(true)
		{
			temp_row+=r;
			temp_col+=c;
			if(temp_row <0 || temp_row>=board.size || temp_col<0 || temp_col>=board.size || board.board[temp_row][temp_col]==EMPTY)
			{
				return 0;
			}
			if(board.board[temp_row][temp_col]==Side^1)
			{ 
					return 1;
			}
		}
}
void PlayerAI::PrintBoard(Board &board)
{
	for(int row=0;row<board.size;row++)
	{
		for(int col=0;col<board.size;col++)
		{
			if(board.board[row][col]==0)
			{
				std::cout<<(char)1<<" ";
			}
			else if(board.board[row][col]==1)
			{
				std::cout<<(char)2<<" ";
			}
			else if(board.board[row][col]==EMPTY)
			{
				std::cout<<"_ ";
			}
		}
		std::cout<<"\n";
	}
}

int PlayerAI::isGameOver(Board &board,int Side)
{
	return 1;
}
int PlayerAI::evaluate(Board &board,int Side)
{
	int corners=0;
	

		
	countCoins(board);
	if(numberOfBlack>numberOfWhite)
	{
			if(board.board[0][0]==BLACK)
			{
				corners++;
			}
			if(board.board[0][board.size-1]==BLACK)
			{
				corners++;
			}
			if(board.board[board.size-1][0]==BLACK)
			{
				corners++;
			}
			if(board.board[board.size-1][board.size-1]==BLACK)
			{
				corners++;
			}
		

		nofwins++;
		return 1+corners;
	}
	else if(numberOfWhite>numberOfBlack)
	{	
			if(board.board[0][0]==WHITE)
			{
				corners--;
			}
			if(board.board[0][board.size-1]==WHITE)
			{
				corners--;
			}
			if(board.board[board.size-1][0]==WHITE)
			{
				corners--;
			}
			if(board.board[board.size-1][board.size-1]==WHITE)
			{
				corners--;
			}
		nooflosses++;
		return -1 + corners;
	}
	else
	{	
		noofdraws++;
		return 0;
	}
}
void PlayerAI::countCoins(Board &board)
{
	numberOfBlack=0;
	numberOfWhite=0;
	for(int row=0;row<board.size;row++)
	{
		for(int col=0;col<board.size;col++)
		{
			if(board.board[row][col]==BLACK)
			{
				numberOfBlack++;
			}
			if(board.board[row][col]==WHITE)
			{
				numberOfWhite++;
			}
		}
	}
}
void PlayerAI::MoveListWithOutDuplicates(std::vector<Move> &moveList,std::vector<Move> &moveListNoDuplicates)
{
	int found;
	for(int i=0;i<moveList.size();i++)
	{
		found=0;

		for(int j=0;j<moveListNoDuplicates.size();j++)
		{
			if(moveList[i].row==moveListNoDuplicates[j].row && moveList[i].col == moveListNoDuplicates[j].col )
			{
				found=1;
				break;
			}
		}
		if(found==0)
		{
			moveListNoDuplicates.push_back(moveList[i]);
		}

	}
}

PlayerAI::~PlayerAI(void)
{
}

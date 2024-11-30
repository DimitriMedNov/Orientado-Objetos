#pragma once
#include"essentials.h"
class PlayerAI:public essentials 
{
	Move bestMove;
public:
	int positons;
	int numberOfWhite;
	int numberOfBlack;
	int nofwins;
	int nooflosses;
	int noofdraws;
	PlayerAI(void);
	int MiniMax(Board & board,int Side,int maxDepth,int currentDepth,int alpha,int beta);
	int isGameOver(Board &board,int Side);
	int evaluate(Board &board,int Side);
	void GenerateMoveList(Board &board,int Side,std::vector<Move> &moveList,std::vector<Move> &moveDirection);
	void LookAround(Board &board,int Side,std::vector<Move> &moveList,std::vector<Move> &moveDirection,int row,int col);
	int IsMovePossible(Board &board,int Side,int row,int col,int r,int c);
	void MakeMove(Board &board,int Side,Move move,std::vector<Move> &moveList,std::vector<Move> &moveDirection);
	void MoveListWithOutDuplicates(std::vector<Move> &moveList,std::vector<Move> &moveListNoDuplicates);
	Move GetBestMove();
	void PrintBoard(Board &board);
	void countCoins(Board &board);
	~PlayerAI(void);
};


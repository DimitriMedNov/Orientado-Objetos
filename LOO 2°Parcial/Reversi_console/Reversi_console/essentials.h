#pragma once
#include<iostream>
#include<vector>
class essentials
{
public:
	struct Board
	{
		int board[10][10];
		int size;
	};
	struct Move
	{
		int row;
		int col;
	};
	enum {BLACK,WHITE,EMPTY};
};
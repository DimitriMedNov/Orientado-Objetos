#include<SDL.h>
#include<string>
#include<SDL_ttf.h>
#include<iostream>
#pragma once
class SDL_TextBox
{
	std::string str;
	SDL_Event event;
	SDL_Surface *text;
	SDL_Color textColor;
	TTF_Font *font;
	SDL_Rect rect;
	int Back_color;
	int selected;
	int x,y;
public:
	SDL_TextBox(SDL_Event &event);
	void TextBox_SetWH(int width,int height);
	void TextBox_SetPostion(int x,int y);
	void TextBox_SetBackgroundColor(int r,int g,int b);
	std::string TextBox_GetText();
	int  TextBox_OnClick();
	void TextBox_Show(SDL_Event &event);
	void TextBox_Events();
	~SDL_TextBox(void);
};


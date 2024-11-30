#pragma once
#include<SDL.h>
#include<SDL_ttf.h>
#include<SDL_image.h>
//#include"GUI.h"
class SDL_Button
{
	SDL_Rect rect;
	SDL_Surface *Screen;
	SDL_Surface *text;
	TTF_Font *font;
	SDL_Color textColor;
	int color;
	int flag_notext;
	int flag_onMoveOver;
	int flag_onMoveDown;
	int flag_onClick;
	SDL_Event event;
	int x;
	int y;
public:
	//initializes the boutton
	SDL_Button(void);
	//displays the on the screen
	void Botton_Show(SDL_Event &events);
	//sets width and height of the button
	void Button_SetWH(int width,int height);
	//sets the postion the of the button on the screen
	void Button_SetPositon(int x,int y);
	//returns the width of the button
	int Button_GetWidth();
	//returns the height of the button
	int Button_GetHeight();
	//returns the x coordinate of the button
	int Button_GetX();
	//returns the y coordinate of the Button
	int Button_GetY();
	//sets the background color of the button
	void Button_SetBackgroundColor(int r,int g,int b);
	//sets text and font and size
	void Button_SetText(const char *text,const char *font_name,int size);
	//sets the color of button text;
	void Button_SetTextColor(int r,int g,int b);
	//text will not be displayed
	void Button_NoText();
	//on mouse over
    int Button_onMoveOver();
	//on mouse down
	int Button_onMoveDown();
	//on left move click
	int Button_OnClick();
	~SDL_Button(void);
private:
	//button event handler
	void Button_Events();
	
};


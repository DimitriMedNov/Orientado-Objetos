#pragma once
#include<SDL.h>
#include<SDL_ttf.h>
#include<iostream>
class String_Input
{
	 //The storage string
    std::string strn;
    //The text surface
    SDL_Surface *text;
	SDL_Color textColor;
	int backColor;
	TTF_Font *font;
	int x;
	int y;
	int x_mouse;
	int y_mouse;
	
	SDL_Rect rect;
	int selected;
public:
	String_Input(void);
	~String_Input(void);
	  //Handles input
	void handle_input(SDL_Event &event);

    //Shows the message on screen
    void show_centered();
	void apply_surface(int x, int y, SDL_Surface* source, SDL_Surface* destination, SDL_Rect* clip = NULL );
	void setPostion(int x,int y);
	void setWH(int w,int h);
	void setBackgroundColor(int r,int g,int b);
	void setTextColor(int r,int g,int b);
	void enterText(SDL_Event &event);
	std::string getString();

	
};


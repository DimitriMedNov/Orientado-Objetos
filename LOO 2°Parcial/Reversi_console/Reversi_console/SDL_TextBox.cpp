#include "SDL_TextBox.h"


SDL_TextBox::SDL_TextBox(SDL_Event &event)
{
	SDL_EnableUNICODE( SDL_ENABLE );
	textColor.r=255;
	textColor.g=0;
	textColor.b=0;
	this->font=TTF_OpenFont("sys.ttf",15);
	this->selected=0;
	TextBox_SetWH(100,50);
	TextBox_SetPostion(0,0);
	TextBox_SetBackgroundColor(200,3,123);
	this->text=NULL;
	 str = "";
}
void SDL_TextBox::TextBox_Events()
{
	 //If a key was pressed
    if( event.type == SDL_KEYDOWN )
    {
        //Keep a copy of the current version of the string
        std::string temp = str;

        //If the string less than maximum size
        if( str.length() <= 16 )
        {
            //If the key is a space
            if( event.key.keysym.unicode == (Uint16)' ' )
            {
                //Append the character
                str += (char)event.key.keysym.unicode;
            }
            //If the key is a number
            else if( ( event.key.keysym.unicode >= (Uint16)'0' ) && ( event.key.keysym.unicode <= (Uint16)'9' ) )
            {
                //Append the character
                str += (char)event.key.keysym.unicode;
            }
            //If the key is a uppercase letter
            else if( ( event.key.keysym.unicode >= (Uint16)'A' ) && ( event.key.keysym.unicode <= (Uint16)'Z' ) )
            {
                //Append the character
                str += (char)event.key.keysym.unicode;
            }
            //If the key is a lowercase letter
            else if( ( event.key.keysym.unicode >= (Uint16)'a' ) && ( event.key.keysym.unicode <= (Uint16)'z' ) )
            {
                //Append the character
                str += (char)event.key.keysym.unicode;
            }
        }

        //If backspace was pressed and the string isn't blank
        if( ( event.key.keysym.sym == SDLK_BACKSPACE ) && ( str.length() != 0 ) )
        {
            //Remove a character from the end
            str.erase( str.length() - 1 );
        }

        //If the string was changed
        if( str != temp )
        {
            //Free the old surface
            SDL_FreeSurface( text );

            //Render a new text surface
            text = TTF_RenderText_Solid( font, str.c_str(), textColor );
        }
    }
}
void SDL_TextBox::TextBox_SetWH(int width,int height)
{
	this->rect.w=width;
	this->rect.h=height;
}
void SDL_TextBox::TextBox_SetPostion(int x,int y)
{
	this->rect.x=x;
	this->rect.y=y;
}
void SDL_TextBox::TextBox_SetBackgroundColor(int r,int g,int b)
{
	this->Back_color= SDL_MapRGB(SDL_GetVideoSurface()->format,r,g,b);
}
void SDL_TextBox::TextBox_Show(SDL_Event &event)
{	
	SDL_FillRect(SDL_GetVideoSurface(),&rect,Back_color);
	SDL_BlitSurface(text,NULL,SDL_GetVideoSurface(),NULL);
	TextBox_OnClick();
	if(selected)
	{
		TextBox_Events();
	}
}
std::string SDL_TextBox::TextBox_GetText()
{
	return str;
}
int SDL_TextBox::TextBox_OnClick()
{
	
	if(event.type==SDL_MOUSEBUTTONDOWN)
	{
		std::cout<<"afas";
	}
	/*if(event.type==SDL_MOUSEMOTION)
	{
		x=event.motion.x;
		y=event.motion.y;
		std::cout<<"\n"<<x<<" "<<y<<"\n";
		if(x>=rect.x && x<=rect.x+rect.w && y>=rect.y && y<=rect.y +rect.h)
		{
			std::cout<<"asfasF";
			selected=1;
		}
		else
		{
			selected=0;
		}
	}*/
	return selected;
}

SDL_TextBox::~SDL_TextBox(void)
{
	
}

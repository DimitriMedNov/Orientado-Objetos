#include "String_Input.h"


String_Input::String_Input(void)
{
	//Initialize the string
    strn = "";

    //Initialize the surface
    text = NULL;
    //Enable Unicode
    SDL_EnableUNICODE( SDL_ENABLE );
	this->font=TTF_OpenFont("micross.ttf",18);
	setWH(200,25);
	setPostion(200,90);
	setBackgroundColor(255,255,255);
	setTextColor(0,0,0);
	x=rect.x;
	y=rect.y;
	this->selected=0;
}


String_Input::~String_Input(void)
{
	 SDL_FreeSurface( text );

    //Disable Unicode
    SDL_EnableUNICODE( SDL_DISABLE );
}
void String_Input::handle_input(SDL_Event &event)
{
	if(event.type==SDL_MOUSEBUTTONDOWN)
	{
		
		x_mouse=event.motion.x;
		y_mouse=event.motion.y;
		if(x_mouse>=rect.x && x_mouse<=rect.x+rect.w && y_mouse>=rect.y && y_mouse<=rect.y +rect.h)
		{	
			std::cout<<"asfs:";
			this->selected=1;
		}
		else
		{
			std::cout<<":rem";
			this->selected=0;
		}
	}
	if(selected)
	{
		//submit.Button_SetBackgroundColor(0,200,250);
		setBackgroundColor(0,200,250);
		enterText(event);
	}
	else
	{
		setBackgroundColor(255,255,255);
	}
}
std::string String_Input::getString()
{
	return this->strn;
}
void String_Input::enterText(SDL_Event &event)
{
		//If a key was pressed
    if( event.type == SDL_KEYDOWN )
    {
        //Keep a copy of the current version of the string
        std::string temp = strn;

        //If the string less than maximum size
        if( strn.length() <= 16 )
        {
            //If the key is a space
            if( event.key.keysym.unicode == (Uint16)' ' )
            {
                //Append the character
                strn += (char)event.key.keysym.unicode;
            }
            //If the key is a number
            else if( ( event.key.keysym.unicode >= (Uint16)'0' ) && ( event.key.keysym.unicode <= (Uint16)'9' ) )
            {
                //Append the character
                strn += (char)event.key.keysym.unicode;
            }
            //If the key is a uppercase letter
            else if( ( event.key.keysym.unicode >= (Uint16)'A' ) && ( event.key.keysym.unicode <= (Uint16)'Z' ) )
            {
                //Append the character
                strn += (char)event.key.keysym.unicode;
            }
            //If the key is a lowercase letter
            else if( ( event.key.keysym.unicode >= (Uint16)'a' ) && ( event.key.keysym.unicode <= (Uint16)'z' ) )
            {
                //Append the character
                strn += (char)event.key.keysym.unicode;
            }
        }

        //If backspace was pressed and the string isn't blank
        if( ( event.key.keysym.sym == SDLK_BACKSPACE ) && ( strn.length() != 0 ) )
        {
            //Remove a character from the end
             strn.erase( strn.length() - 1 );
        }

        //If the string was changed
		
		if(strn.compare(temp) !=0);
        {
            //Free the old surface
            SDL_FreeSurface( text );

            //Render a new text surface
            text = TTF_RenderText_Solid( font, strn.c_str(), textColor );
        }
    }
}
void String_Input::show_centered()
{
	SDL_FillRect(SDL_GetVideoSurface(),&rect,backColor);
	 //If the surface isn't blank
	if( text != NULL )
    {
		x=(rect.x+18);
		y=rect.y;
        //Show the name
		apply_surface( x, y, text, SDL_GetVideoSurface() );
	//	std::cout<<"asf:h";
    }
}

void String_Input::apply_surface( int x, int y, SDL_Surface* source, SDL_Surface* destination, SDL_Rect* clip)
{
    //Holds offsets
    SDL_Rect offset;
    //Get offsets
    offset.x = x;
    offset.y = y;
    //Blit
    SDL_BlitSurface(source, clip, destination, &offset);
}
void String_Input::setPostion(int x,int y)
{
	rect.x=x;
	rect.y=y;
}
void String_Input::setWH(int w,int h)
{
	rect.w=w;
	rect.h=h;
}
void String_Input::setBackgroundColor(int r,int g,int b)
{
	backColor=SDL_MapRGB(SDL_GetVideoSurface()->format,r,g,b);
}
void String_Input::setTextColor(int r,int g,int b)
{
	this->textColor.r=r;
	this->textColor.g=g;
	this->textColor.b=b;
}
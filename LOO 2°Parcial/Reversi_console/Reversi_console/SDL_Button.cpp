#include "SDL_Button.h"


SDL_Button::SDL_Button(void)
{	//gets the address of the screen buffer
	this->Screen=SDL_GetVideoSurface();	
	this->color=SDL_MapRGB(Screen->format,200,200,200);
	//sets the default positon of the button to the center
	Button_SetWH(100,50);
	Button_SetPositon(Screen->w/2-rect.w/2,Screen->h/2-rect.h/2);
	TTF_Init();
	Button_SetText("Button","fmct.ttf",30);
	this->flag_notext=0;
	this->flag_onClick=0;
	this->flag_onMoveDown=0;
	this->flag_onMoveOver=0;
	
}
void SDL_Button::Button_SetPositon(int x,int y)
{
	rect.x=x;
	rect.y=y;
}
void SDL_Button::Button_SetWH(int width,int height)
{
	rect.w=width;
	rect.h=height;
}
int SDL_Button::Button_GetWidth()
{
	return rect.w;
}
int SDL_Button::Button_GetHeight()
{
	return rect.h;
}
int SDL_Button::Button_GetX()
{
	return rect.x;
}
int SDL_Button::Button_GetY()
{
	return rect.y;
}
void SDL_Button::Button_SetBackgroundColor(int r,int g,int b)
{
	this->color=SDL_MapRGB(Screen->format,r,g,b);
}
void SDL_Button::Button_SetText(const char *text,const char *font_name,int size)
{
	this->font=TTF_OpenFont(font_name,size);
	this->text= TTF_RenderText_Blended(font,text,textColor);
	Button_SetTextColor(30,0,70);
}
void SDL_Button::Button_SetTextColor(int r,int g,int b)
{
	this->textColor.r=r;
	this->textColor.g=g;
	this->textColor.b=b;
}
void SDL_Button::Botton_Show(SDL_Event &events)
{
	this->event=events;
	SDL_FillRect(Screen,&rect,color);
	SDL_Rect text_rect;
	if(!flag_notext)
	{
		text_rect.x=rect.x+rect.w/4;
		text_rect.y=rect.y+rect.h/4;
		SDL_BlitSurface(text,NULL,Screen,&text_rect);
	}
	Button_Events();

}
void SDL_Button::Button_NoText()
{
	this->flag_notext=1;
}
int SDL_Button::Button_onMoveOver()
{
	return flag_onMoveOver;		
}
int SDL_Button::Button_onMoveDown()
{
	return flag_onMoveDown;
}
int SDL_Button::Button_OnClick()
{
	return flag_onClick;
}
void SDL_Button::Button_Events()
{	
		
		if(event.type==SDL_QUIT)
		{
			exit(1);
		}
		else if(event.type==SDL_MOUSEMOTION)
		{	
				x=event.motion.x;
				y=event.motion.y;
				if(x>=rect.x && x<=rect.x+rect.w && y>=rect.y && y<=rect.y +rect.h)
				{
					
					this->flag_onMoveOver=1;
				}
				else
				{
					this->flag_onMoveOver=0;
				}
		}			
	
		else if(event.type==SDL_MOUSEBUTTONDOWN )
		{
			if((x>rect.x) &&( x<rect.x+rect.w) && (y>rect.y) &&( y<rect.y+rect.h))
			{
				if(event.button.button == SDL_BUTTON_LEFT)
				{
					this->flag_onClick=1;
				}
			}
			else
			{
				this->flag_onClick=0;
			}		
		}
}
	


SDL_Button::~SDL_Button(void)
{
	SDL_FreeSurface(text);
}

#include "Input.h"
#include "Initialization.h"
#include "Window.h"
#include "Renderer.h"





//i want to use main to check to see if i have what i need to run the program, then run the program.
int main(int argc, char* argv[])
{	
	
	cWindow win;
	cRenderer ren;

	


	 
	init();
	SDL_Window* pwindow = win.createWindow();
	SDL_Renderer* prenderer = ren.createRenderer(pwindow);

	SDL_Event event;
	

	//game loop here
	//bool running = false;
	while (SDL_PollEvent(&event))
	{
		//handleinput();
		//handleEvents
		//update
		//render
	}
	SDL_SetRenderDrawColor(prenderer, 0, 0, 0, 0);

	SDL_RenderClear(prenderer);

	SDL_RenderPresent(prenderer);
	SDL_Delay(10000);
	return 0;
}
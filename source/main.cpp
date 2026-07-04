#include<iostream>
#include<SDL3/SDL.h>
#include<SDL3_image/SDL_image.h>
#include<SDL3_mixer/SDL_mixer.h>
#include<SDL3_ttf/SDL_ttf.h>
#include<vulkan/vulkan_raii.hpp>
int main()
{
	SDL_Init(SDL_INIT_VIDEO | SDL_INIT_AUDIO);
	MIX_Init();
	TTF_Init();
	SDL_Window* window = SDL_CreateWindow("SDL3 Vulkan Example", 1500, 750, SDL_WINDOW_VULKAN);
	bool running = true;
	while (running)
	{
		SDL_Event event;
		while (SDL_PollEvent(&event))
		{
			if (event.type == SDL_EVENT_QUIT)
			{
				running = false;
			}
		}
	}
	
}
#pragma once
#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>

class RenderWindow{

public:
	RenderWindow(const char* p_tittle, int p_w, int p_h);
	SDL_Texture* loadTexture(const char* p_filePath);
	void cleanUp();
	void clear();
	void render(SDL_Texture* p_tex);
	void display();
private:
	SDL_Window* window;
	SDL_Renderer* renderer; 
};
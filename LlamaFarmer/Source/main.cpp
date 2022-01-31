#include <SDL.h>
#include "config.h"
#include "world.h"

int main(int, char *[]) 
{
	SDL_Init(SDL_INIT_EVERYTHING);
	
	World<WorldConfig::LlamaWorldWidth, WorldConfig::LlamaWorldHeight> *world = new World<WorldConfig::LlamaWorldWidth, WorldConfig::LlamaWorldHeight>();

	delete world;

	return 0;
}
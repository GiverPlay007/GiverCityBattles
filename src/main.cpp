#include "game.hpp"

#define FRAME_DELAY 1000 / 60

Game *game = nullptr;

int main(int args, char *argv[])
{
	Uint32 frameStart;
	int frameTime;

	game = new Game();
	game->init("Givercity Battles", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 460, 680, false);
	
	while (game->isRunning()) {
		frameStart = SDL_GetTicks();

		game->handleEvents();
		game->update();
		game->render();

		frameTime = SDL_GetTicks() - frameStart;

		if (FRAME_DELAY > frameTime) {
			SDL_Delay(FRAME_DELAY - frameTime);
		}
	}

	game->clean();

	return 0;
}
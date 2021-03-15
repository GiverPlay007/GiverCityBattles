#include "game.hpp"

Game *game = nullptr;

int main(int args, char *argv[])
{
	const int FPS = 60;
	const int frameDelay = 1000 / 60;

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

		if (frameDelay > frameTime) {
			SDL_Delay(frameDelay - frameTime);
		}
	}

	game->clean();

	return 0;
}
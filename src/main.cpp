#include "game.hpp"

Game *game = nullptr;

int main(int args, char *argv[])
{
	game = new Game();
	game->init("Givercity Battles", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 460, 680, true);

	while (game->isRunning()) {
		game->handleEvents();
		game->update();
		game->render();
	}

	game->clean();

	return 0;
}
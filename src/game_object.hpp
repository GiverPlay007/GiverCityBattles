#ifndef GAME_OBJECT_HPP
#define GAME_OBJECT_HPP

#include "game.hpp"

class GameObject {

public:
	GameObject(const char* texturesheet, SDL_Renderer* renderer, int xPos, int yPos);

	~GameObject();

	void update();

	void render();


private:
	int xPos;
	int yPos;

	SDL_Texture* objectTexture;
	SDL_Renderer* renderer;
	SDL_Rect srcRect, desRect;
};

#endif
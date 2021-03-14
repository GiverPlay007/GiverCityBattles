#pragma once

#include "game.hpp"

class TextureManager {
public:
	static SDL_Texture* loadTexture(const char* fileName, SDL_Renderer* renderer);
};
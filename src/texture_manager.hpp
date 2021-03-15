#ifndef TEXTURE_MANAGER_HPP
#define TEXTURE_MANAGER_HPP

#include "game.hpp"

class TextureManager {
public:
	static SDL_Texture* loadTexture(const char* fileName, SDL_Renderer* renderer);
};

#endif
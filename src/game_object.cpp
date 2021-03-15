#include "game_object.hpp"
#include "texture_manager.hpp"

GameObject::GameObject(const char* texturesheet, SDL_Renderer* ren, int xpos, int ypos)
{
	renderer = ren;
	objectTexture = TextureManager::loadTexture(texturesheet, renderer);

	xPos = xpos;
	yPos = ypos;
}

void GameObject::update()
{
	++xPos;
	++yPos;

	srcRect.x = 0;
	srcRect.y = 0;

	srcRect.w = 32;
	srcRect.h = 32;

	desRect.x = xPos;
	desRect.y = yPos;

	desRect.w = srcRect.w * 2;
	desRect.h = srcRect.h * 2;
}

void GameObject::render()
{
	SDL_RenderCopy(renderer, objectTexture, &srcRect, &desRect);
}
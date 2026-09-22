#include "GameManager.h"

int main()
{
	GameManager* game = new GameManager();
	game->StartNewGame();

	game = nullptr;
	delete game;
}
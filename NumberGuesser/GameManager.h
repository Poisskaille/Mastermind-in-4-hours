#pragma once
#include <thread>
#include <string>
#include <vector>
#include <ctime>

#include "MainScreenPrinter.h"

class GameManager
{
public:

	GameManager();
	void StartNewGame();


private:
	MainScreenPrinter printer;

	void ConfigureParam();
	void GenerateNumber();
	bool RunGame();
	void RestartGame(bool win = false);
	void CheatResults();
	int CheckNSAnswer(std::vector<bool>&);



	// Game param
	int numberToGuess = 4;
	int maxRounds = 10;

	int currentRound = 0;
	std::vector<int> numberSequence;

	bool keepPlaying = true;
};


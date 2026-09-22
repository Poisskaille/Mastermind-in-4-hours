#pragma once
#include <iostream>

class MainScreenPrinter
{
public:

	/// <summary>
	/// It just cout the main text menu
	/// </summary>
	void ShowMainText();
	void ShowNextInput();
	void ShowSetNumbersToGuess();
	void ShowSetNumberOfTry();
	void ShowConfirmParam(int, int);
	void ShowHowToPlay();
	void ShowErrorInput(int, int, int);
	void ShowVictory();
	void ShowDefeat();
};


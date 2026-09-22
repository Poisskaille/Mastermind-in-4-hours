#include "MainScreenPrinter.h"

void MainScreenPrinter::ShowMainText()
{
	std::cout << " _____     _        _ _                     _                     " << '\n';
	std::cout << " |_   _|__ | |_ __ _| | |_   _   _ __   ___ | |_                  " << '\n';
	std::cout << "   | |/ _ \\| __/ _` | | | | | | | '_ \\ / _ \\| __|                 " << '\n';
	std::cout << "   | | (_) | || (_| | | | |_| | | | | | (_) | |_                  " << '\n';
	std::cout << "  _|_|\\___/ \\__\\__,_|_|_|\\__, | |_| |_|\\___/ \\__|     _   _       " << '\n';
	std::cout << " |  \\/  | __ _ ___| |_ __|___/_ _ __ ___ (_)_ __   __| | (_)_ __  " << '\n';
	std::cout << " | |\\/| |/ _` / __| __/ _ \\ '__| '_ ` _ \\| | '_ \\ / _` | | | '_ \\ " << '\n';
	std::cout << " | |  | | (_| \\__ \\ ||  __/ |  | | | | | | | | | | (_| | | | | | |" << '\n';
	std::cout << " |_|__|_|\\__,_|___/\\__\\___|_|  |_| |_| |_|_|_| |_|\\__,_| |_|_| |_|" << '\n';
	std::cout << "  / ___| _     _                                                  " << '\n';
	std::cout << " | |   _| |_ _| |_                                                " << '\n';
	std::cout << " | |__|_   _|_   _|                                               " << '\n';
	std::cout << "  \\____||_|   |_|                                                 " << '\n';
	std::cout << '\n';
}

void MainScreenPrinter::ShowNextInput()
{
	std::cout << "Press any buttons to play" << '\n';
}

void MainScreenPrinter::ShowSetNumbersToGuess()
{
	std::cout << "Enter how many numbers you want to guess" << '\n';
	std::cout << "(default is 4, if you agree press Enter)" << '\n';
}

void MainScreenPrinter::ShowSetNumberOfTry()
{
	std::cout << "Enter how many try you want " << '\n';
	std::cout << "(default is 10, if you agree just press enter)" << '\n';
}

void MainScreenPrinter::ShowConfirmParam(int number, int round)
{
	std::cout << "Current Parameters : " << '\n';
	std::cout << "How many numbers to guess : " << number << '\n';
	std::cout << "How many rounds : " << round << '\n';
	std::cout << '\n';
	std::cout << "Press anything to continue" << '\n';
}

void MainScreenPrinter::ShowHowToPlay()
{
	std::cout << " >>- Enter your guess like this : 5246 (no space no inbetween)" << '\n';
}

void MainScreenPrinter::ShowErrorInput(int good, int bad, int notreally)
{
	std::cout << good << " is good and in the right place" << '\n';
	std::cout << bad << " is wrong" << '\n';
	std::cout << notreally << " is good but not in the right place" << '\n';
}

void MainScreenPrinter::ShowVictory()
{
	std::cout << "Looks like you won" << '\n';
	std::cout << "Play Again ?" << '\n';
	std::cout << "Y - Yes, N - No" << '\n';
}

void MainScreenPrinter::ShowDefeat()
{
	std::cout << "Looks like you lose" << '\n';
	std::cout << "Play Again ?" << '\n';
	std::cout << "Y - Yes, N - No" << '\n';
}

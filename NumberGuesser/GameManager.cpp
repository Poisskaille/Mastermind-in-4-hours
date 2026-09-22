#include "GameManager.h"

GameManager::GameManager()
{
	printer = MainScreenPrinter();
}

void GameManager::StartNewGame()
{
	srand(unsigned(time(NULL)));
	system("cls");
	while(keepPlaying)
	{
		printer.ShowMainText();
		printer.ShowNextInput();
		std::cin.get();
		ConfigureParam();
		GenerateNumber();
		bool won = RunGame();
		RestartGame(won);
	}
}

void GameManager::ConfigureParam()
{
	system("cls");
	printer.ShowMainText();
	bool restart = false;
	while (true) {
		printer.ShowSetNumbersToGuess();

		numberToGuess = 4;
		std::string input;
		std::getline(std::cin, input);

		if (input.empty()) break;

		char cInput = input.at(0);

		if (!isdigit(cInput)) {
			std::cout << "Enter a valid value" << '\n';
			continue;
		}
		numberToGuess = std::stoi(input);
		break;
	}

	while (true)
	{
		printer.ShowSetNumberOfTry();

		maxRounds = 10;
		std::string input;
		std::getline(std::cin, input);

		if (input.empty()) break;

		char cInput = input.at(0);

		if (!isdigit(cInput)) {
			std::cout << "Enter a valid value" << '\n';
			continue;
		}
		maxRounds = std::stoi(input);
		break;
	}

	while (true)
	{
		system("cls");
		printer.ShowMainText();
		printer.ShowConfirmParam(numberToGuess, maxRounds);

		std::cin.get();
		break;
	}
}

void GameManager::GenerateNumber()
{
	for(int i = 0; i < 25; i++)
	{
		system("cls");
		std::cout << "Generating impossible configuration" << '\n';
		for(int l = 0; l <= numberToGuess; l++)
		{
			std::cout << (rand() % 10) << "     ";
			std::this_thread::sleep_for(std::chrono::milliseconds(25));
		}
	}
	numberSequence.clear();
	for (int l = 0; l < numberToGuess; l++)
		numberSequence.push_back((rand() % 10));
}

bool GameManager::RunGame()
{
	system("cls");
	currentRound = 1;
	while(currentRound <= maxRounds)	
	{
		std::cout << "Round " << currentRound << " , " << "Round Remaining : " << maxRounds - currentRound << '\n';
		printer.ShowHowToPlay();

		//CheatResults();
		std::string input;
		std::getline(std::cin, input);

		if (input.size() != numberSequence.size())
			continue;
		
		std::vector<bool> found(numberSequence.size(), false);

		int rAnswer = 0;
		int wAnswer = 0;
		int nsAnswer = 0;

		bool errorFound = false;
		
		int i = 0;
		for(auto& c : input)
		{
			int cInt = (c - '0');
			if(cInt == numberSequence.at(i))
			{
				rAnswer++;
				found.at(i) = true;
			}
			else
			{
				errorFound = true;
				bool answerFound = false;
				for(size_t j = 0; j < input.size(); j++)
				{
					if(cInt == numberSequence.at(j) && !found.at(j))
					{
						nsAnswer++;
						found.at(j) = true;
						answerFound = true;
						break;
					}
				}
				if (!answerFound)
					wAnswer++;
			}
			i++;
		}

		printer.ShowErrorInput(rAnswer,wAnswer,nsAnswer);
		if (!errorFound)
		{
			system("cls");
			return true;
		}
		currentRound++;
	}
	return false;
}

void GameManager::RestartGame(bool win)
{
	win ? printer.ShowVictory() : printer.ShowDefeat();

	char input;
	std::cin >> input;
	input = static_cast<char>(std::tolower(input));

	if (input == 'n')
		keepPlaying = false;
		
}

void GameManager::CheatResults()
{
	for (int value : numberSequence)
		std::cout << value;
	std::cout << '\n';
}

int GameManager::CheckNSAnswer(std::vector<bool>& answer)
{
	return 0;
}

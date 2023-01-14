#include <iostream>
#include <ctime>
#include <cstdlib>

int main() {
	srand(time(0));
	int x = (rand() % 100) + 1;
	int guess;
	bool guessIsRight = false;
	int attempts = 7;

	std::cout << "Guess the number between 1 - 100 \n";

	while (!guessIsRight) {
		std::cin >> guess;
		if (guess == x) {
			std::cout << "Well done!\n";
			std::cout << "You won, with " << attempts << " attempts!\n";
			guessIsRight = true;
		}
		else if (guess > x) {
			if (guess > 100) {
				std::cout << "You cannot guess less than 1 or more than 100!\n";
			}
			else if (attempts <= 0) {
				std::cout << "You don't have any attempts left!\n";
				break;
			}
			else {
				std::cout << "Your number is too big!\n";
				std::cout << "You have " << attempts << " attempts left" << "\n";
				attempts--;
			}
		}
		else if (guess < x) {
			if (guess < 1) {
				std::cout << "You cannot guess less than 1 or more than 100!\n";
			}
			else if (attempts <= 0) {
				std::cout << "You don't have any attempts left!\n";
				break;
			}
			else {
				std::cout << "Your number is too low!\n";
				std::cout << "You have " << attempts << " attempts left" << "\n";
				attempts--;
			}
		}
		else {
			std::cout << "Wrong input, please type a whole number between 1 - 100!\n";
		}
	}

	system("pause");

	return 0;
}
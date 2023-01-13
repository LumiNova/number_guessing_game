#include <iostream>
#include <ctime>
#include <cstdlib>

int main() {
	srand(time(0));
	int x = (rand() % 100) + 1;
	int guess;
	bool guessIsRight = false;
	int attempts = 7;

	std::cout << "Guess the number between 1 - 100!\n";

	while (!guessIsRight) {
		std::cin >> guess;
		if (guess == x) {
			std::cout << "Congratulations!\n";
			std::cout << "You won, with " << attempts << " attempts!\n";
			guessIsRight = true;
		}
		else if (guess > x) {
			if (guess > 100) {
				std::cout << "You can't guess below 1 or above 100!\n";
			}
			else if (attempts <= 0) {
				std::cout << "You have no more attempts!\n";
				break;
			}
			else {
				std::cout << "Your guess is too much!\n";
				std::cout << "Attempts left: " << attempts << "\n";
				attempts--;
			}
		}
		else if (guess < x) {
			if (guess < 1) {
				std::cout << "You can't guess below 1 or above 100!\n";
			}
			else if (attempts <= 0) {
				std::cout << "You have no more attempts!\n";
				break;
			}
			else {
				std::cout << "Your guess is too low!\n";
				std::cout << "Attempts left: " << attempts << "\n";
				attempts--;
			}
		}
		else {
			std::cout << "Invalid guess!\n";
		}
	}

	return 0;
}
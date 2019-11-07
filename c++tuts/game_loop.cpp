#include "Header.h"

void play_game() {
	std::vector<int> guesses;
	int count = 0;
	int random = rand() % 251;

	std::cout << random << std::endl;
	std::cout << "Guess a number: ";

	while (true) {
		int guess;
		std::cin >> guess;
		count++;

		guesses.push_back(guess);

		if (guess == random) {
			std::cout << "You win!\n";
			break;
		}
		else if (guess < random) {
			std::cout << "Too low\n";
		}
		else {
			std::cout << "Too high\n";
		}
	}
	save_score(count);
	print_vector(guesses);
}
#include "Header.h"

void save_score(int count) {
	std::ifstream input("best_score.txt");
	if (!input.is_open()) {
		std::cout << "Unable to read file\n";
		return;
	}
	int best_score;
	input >> best_score;

	std::ofstream output("best_score.txt");
	if (!output.is_open()) {
		std::cout << "Unable to read file\n";
		return;
	}

	if (count < best_score) {
		output << count;
	}
	else {
		output << best_score;
	}
}
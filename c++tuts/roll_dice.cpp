#include "Header.h"

void roll_dice() {
	int random = rand() % 5000;
	std::cout << "You rolled: " << random << std::endl << "\n";
}
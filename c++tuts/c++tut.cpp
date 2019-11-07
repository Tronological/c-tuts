#include "Header.h"

int main() 
{
	srand(time(NULL));
	int choice;

	do {
		std::cout << "0. Quit" << std::endl << "1. Play Game\n";
		std::cin >> choice;

		switch (choice) {
			case 0:
				std::cout << "Thanks for nothing nigga\n";
				return 0;
			case 1:
				play_game();
				break;
		}
	} while (choice != 0);
}
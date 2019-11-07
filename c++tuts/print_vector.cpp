#include "Header.h"

void print_vector(std::vector<int> vector) {
	for (int i = 0; i < vector.size(); i++) {
		std::cout << vector[i] << "\t";
	}
	std::cout << "\n";
}
#include <iostream>
#include <vector>
#include <fstream>

int main() {
	std::string file_name("input.txt");
	std::vector<int> numbers;
	int number;
	int n1 = 0, n2 = 0, n3 = 0, sol = 0;

	std::ifstream input_file(file_name);
	if (!input_file.is_open()) {
		std::cout << "couldnt load file " << std::endl;
	}

	while (input_file >> number) {
		numbers.push_back(number);
	}

	for (unsigned int i = 0; i < numbers.size(); i++) {
		n1 = numbers.at(i);
		for (unsigned int l = (i + 1); l < numbers.size(); l++) {
			n2 = numbers.at(l);
			for (unsigned int j = (l + 1); j < numbers.size(); j++) {
				n3 = numbers.at(j);
				if (n1 + n2 + n3 == 2020) {
					sol = n1 * n2 * n3;
				}
			}
		}
	}

	std::cout << "Solution: " << sol << std::endl;

	return 0;
}
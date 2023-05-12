#include <iostream>
#include <fstream>



int main() {

	std::string str;
	std::string keyword;

	std::cout << "Enter the word to be found: ";
	std::cin >> keyword;

	int number_of_repetition = 0;

	std::ifstream fin_w;

	fin_w.open("D:\\Skillbox\\C++\\working\\Practice 19 (reading from files)\\task1\\words.txt");

	if (fin_w.is_open()) {

		std::cout << "File is open\n";
		std::cout << std::endl;

	}
	else {

		std::cout << "WARNING!\n";
		std::cout << "ERROR!!!\n";
		std::cout << "File is not open\n";

	}

	while (!fin_w.eof()) {

		str = "";
		fin_w >> str;		

		if (str == keyword) {

			++number_of_repetition;

		}	

	}

	std::cout << "Number of repetition = " << number_of_repetition;

	fin_w.close();
}

#include "../headers/iter.hpp"

int main( void ) {
	std::cout << "-----TEST WITH ARRAY OF STRINGS (Function Capitalize)-----" << std::endl;
	std::cout << CYAN << "BEFORE" << NRM << std::endl;
	std::string array[] = {"test", "code", "rabbit"};
	for (int i = 0; i < 3; ++i) {
		std::cout << array[i] << std::endl;
	}
	::iteration(array, 3, &toUpper);
	std::cout << CYAN << "AFTER" << NRM << std::endl;
	for (int i = 0; i < 3; ++i) {
		std::cout << array[i] << std::endl;
	}

	std::cout << std::endl << "-----TEST WITH ARRAY OF INTS (Function Multiply)-----" << std::endl;
	std::cout << CYAN << "BEFORE" << NRM << std::endl;
	int arrayTwo[] = {9, 15, 42};
	for (int i = 0; i < 3; ++i) {
		std::cout << arrayTwo[i] << std::endl;
	}
	::iteration(arrayTwo, 3, &multiply);
	std::cout << CYAN << "AFTER" << NRM << std::endl;
	for (int i = 0; i < 3; ++i) {
		std::cout << arrayTwo[i] << std::endl;
	}

	std::cout << std::endl << "-----TEST WITH ARRAY OF CLASS (Function Area)-----" << std::endl;
	Area points[3];
	points[0].width = 10;
	points[0].length = 20;
	points[0].area = 0;
	points[1].width = 30;
	points[1].length = 40;
	points[1].area = 0;
	points[2].width = 50;
	points[2].length = 50;
	points[2].area = 0;
	std::cout << CYAN << "BEFORE" << NRM << std::endl;
	for (int i = 0; i < 3; ++i) {
		std::cout << "WIDTH: " << points[i].width << std::endl;
		std::cout << "LENGTH: " << points[i].length << std::endl;
		std::cout << "AREA: " << points[i].area << std::endl << std::endl;
	}
	::iteration(points, 3, &areanizer);
	std::cout << CYAN << "AFTER" << NRM << std::endl;
	for (int i = 0; i < 3; ++i) {
		std::cout << "WIDTH: " << points[i].width << std::endl;
		std::cout << "LENGTH: " << points[i].length << std::endl;
		std::cout << "AREA: " << points[i].area << std::endl << std::endl;
	}

}



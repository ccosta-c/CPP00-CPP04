
#include "../headers/Span.hpp"

int main(void) {
	try {
		Span test(50000);
		//int Temp[] = {-100, 4, 6, 110,  10000, 9999};

		//test.addNumbersBulk(Temp, Temp + (sizeof(Temp) / sizeof(Temp[0])));
		test.randomNumbers(50000);
		//std::cout<< test.getVector() << std::endl;
		std::cout << "Longest Span: " << test.longestSpan() << std::endl;
		std::cout << "-----Shortest Spans that were checked------" << std::endl;
		std::cout << test.shortestSpan() << "  <---- Shorter Span"<< std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}

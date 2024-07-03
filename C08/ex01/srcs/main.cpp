
#include "../headers/Span.hpp"

int main(void) {
	try {
		Span test(50000);
		//int Temp[] = {52, 4, 104, 110};

		//test.addNumbersBulk(Temp, Temp+4);
		test.randomNumbers(50000);
		std::cout<< test.getVector() << std::endl;
		std::cout << "Longest Span: " << test.longestSpan() << std::endl;
		std::cout << "-----Shortest Spans that were checked------" << std::endl;
		std::cout << test.shortestSpan() << "  <---- Shorter Span"<< std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}

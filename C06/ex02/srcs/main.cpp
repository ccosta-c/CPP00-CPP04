
#include "../headers/clrs.hpp"
#include <cstdlib>
#include <ctime>
#include <iostream>
#include <csignal>

Base* generate(void)
{
	srand(time(NULL));
	int num = 1 + (rand() % 3);
	std::string letters[] = {"A", "B", "C"};
	std::cout << "The random class instanced was " << CYAN << letters[num - 1] << NRM << std::endl;
	if(num == 1)
		return (new A());
	if(num == 2)
		return (new B());
	else
		return (new C());
}

void identify(Base* p)
{
	A* firsTest = dynamic_cast<A*>(p);
	B* secondTest = dynamic_cast<B*>(p);
	C* thirdTest = dynamic_cast<C*>(p);

	Base *array[] = {firsTest, secondTest, thirdTest};
	std::string letters[] = {"A", "B", "C"};

	for (int i = 0; i < 3; ++i) {
		if (array[i])
			std::cout << "The mystery pointer is of Class " << CYAN << letters[i] << NRM << std::endl;
	}
}

void identify(Base& p)
{
	try {
		A firstTest = dynamic_cast<A&>(p);
		std::cout << "The mystery reference is of Class " << CYAN << "A" << NRM << std::endl;
	}
	catch (std::exception e) {
	}
	try {
		B secondTest = dynamic_cast<B&>(p);
		std::cout << "The mystery reference is of Class " << CYAN << "B" << NRM << std::endl;
	}
	catch (std::exception e) {
	}
	try {
		C thirdTest= dynamic_cast<C&>(p);
		std::cout << "The mystery reference is of Class " << CYAN << "C" << NRM << std::endl;
	}
	catch (std::exception e) {
	}
}

int main (void)
{
	Base* mystery = generate();
	identify(mystery);
	Base& mysteryRef = *mystery;
	identify(mysteryRef);
	delete mystery;
}



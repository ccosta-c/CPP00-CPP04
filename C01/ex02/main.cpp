
#include <string>
#include <iostream>

int main ( void )
{
	std::string string = "HI THIS IS BRAIN";
	std::string *stringPTR = &string;
	std::string& stringREF = string;

	std::cout << "Memory Address of Original String - " << &string << "\n";
	std::cout << "Memory Address of Pointer - " << &stringPTR << "\n";
	std::cout << "Memory Address of Reference - " << &stringREF << "\n";
}

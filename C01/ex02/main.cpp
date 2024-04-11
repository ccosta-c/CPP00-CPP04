
#include <string>
#include <iostream>

int main ( void )
{
	std::string string = "HI THIS IS BRAIN";
	std::string *stringPTR = &string;
	std::string& stringREF = string;

	std::cout << string << "\nMemory Address of Original String - " << &string << "\n";
	std::cout << *stringPTR << "\nMemory Address of Pointer - " << &stringPTR << "\n";
	std::cout << stringREF << "\nMemory Address of Reference - " << &stringREF << "\n";
}

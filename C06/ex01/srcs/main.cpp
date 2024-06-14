
#include "../headers/Serializer.hpp"

int main(void)
{
	Data *test = new(Data);
	uintptr_t ptr;

	test->something = 42;
	std::cout << "Value inside the structure: " << CYAN << test->something << NRM << std::endl;
	std::cout << "Memory Address of Data: " << CYAN << test << NRM << std::endl;
	ptr = Serializer::serialize(test);
	std::cout << "Value of uintptr_t after serialize: " << CYAN << ptr << NRM << std::endl;
	test = NULL;
	std::cout << "I put the Data to NULL: " << CYAN << test << NRM << std::endl;
	test = Serializer::deserialize(ptr);
	std::cout << "Memory address of Data after deserialize: " << CYAN << test << NRM << std::endl;
	std::cout << "Trying to access the value inside Data: " << CYAN << test->something << NRM << std::endl;
}


#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
	Animal* array[4];
	int iter = 0;
	while(iter <= 1)
	{
		array[iter] = new Cat();
		iter++;
	}
	while(iter <= 3)
	{
		array[iter] = new Dog();
		iter++;
	}
	for (int i = 0; i < 4; i++)
	{
		std::cout << &array[i] << std::endl;
	}
	for (int i = 0; i < 4; i++)
		delete array[i];
	return 0;
}

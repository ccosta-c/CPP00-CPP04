
#include "../headers/Animal.hpp"
#include "../headers/Dog.hpp"
#include "../headers/Cat.hpp"
#include "../headers/WrongAnimal.hpp"
#include "../headers/WrongCat.hpp"

int main()
{
	Dog *one = new Dog();
	Dog *two = new Dog(*one);
	//*two = *one; // will make a deep copy
	std::cout << &one << "    " << &two << std::endl;
	std::cout << one->getBrain() << "    " << two->getBrain() << std::endl;
	delete one;
	delete two;

	//Animal* test = Animal();
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

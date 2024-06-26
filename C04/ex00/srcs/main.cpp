
#include "../headers/Animal.hpp"
#include "../headers/Dog.hpp"
#include "../headers/Cat.hpp"
#include "../headers/WrongAnimal.hpp"
#include "../headers/WrongCat.hpp"

int main()
{
	std::cout << CYAN << "------------Subject Tests-------------" << NRM << std::endl;
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();
	delete meta;
	delete j;
	delete i;
	std::cout << CYAN << "----------------WrongAnimal Tests----------------" << NRM << std::endl;
	const WrongAnimal* undanimal = new WrongAnimal();
	const WrongAnimal* catvar = new WrongCat();
	std::cout << undanimal->getType() << " " << std::endl;
	std::cout << catvar->getType() << " " << std::endl;
	undanimal->makeSound(); //will output the cat sound!
	catvar->makeSound();
	delete undanimal;
	delete catvar;
}

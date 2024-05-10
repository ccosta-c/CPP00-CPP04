
#include "Animal.hpp"

Animal::Animal()
{
	type = "Undefined";
}

Animal::Animal(Animal &copy)
{
	*this = copy;
}

Animal& Animal::operator=(const Animal &values)
{
	if (this != &values)
	{
		this->type = values.type;
	}
	return(*this);
}

Animal::~Animal()
{
}

std::string Animal::getType() const
{
	return (type);
}
void Animal::makeSound() const
{
	std::cout << "* Strange Animal Noises *" << std::endl;
}

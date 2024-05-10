
#include "Dog.hpp"

Dog::Dog()
{
	type = "Dog";
}

Dog::Dog(Dog &copy)
{
	*this = copy;
}

Dog& Dog::operator=(const Dog &values)
{
	if (this != &values)
	{
		this->type = values.type;
	}
	return(*this);
}

Dog::~Dog()
{
}

std::string Dog::getType() const
{
	return (type);
}

void Dog::makeSound() const
{
	std::cout << "* OOOOFF OOOOOFFF *" << std::endl;
}

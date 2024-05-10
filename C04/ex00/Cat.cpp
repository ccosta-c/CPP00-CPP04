
#include "Cat.hpp"

Cat::Cat()
{
	type = "Cat";
}

Cat::Cat(Cat &copy)
{
	*this = copy;
}

Cat& Cat::operator=(const Cat &values)
{
	if (this != &values)
	{
		this->type = values.type;
	}
	return(*this);
}

Cat::~Cat()
{
}

std::string Cat::getType() const
{
	return (type);
}

void Cat::makeSound() const
{
	std::cout << "* Miau Miau *" << std::endl;
}

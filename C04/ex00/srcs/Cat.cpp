
#include "../headers/Cat.hpp"

Cat::Cat()
{
	type = "Cat";
	std::cout << GRN << type << NRM << " has been created." << std::endl;
}

Cat::Cat(Cat &copy)
{
	*this = copy;
	std::cout << GRN << this->getType() << NRM << " gets cloned!" << std::endl;
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
	std::cout << GRN << type << NRM << " has been destroyed." << std::endl;
}

std::string Cat::getType() const
{
	return (type);
}

void Cat::makeSound() const
{
	std::cout << "* Miau Miau *" << std::endl;
}

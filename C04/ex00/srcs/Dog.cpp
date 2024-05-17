
#include "../headers/Dog.hpp"

Dog::Dog()
{
	type = "Dog";
	std::cout << GRN << type << NRM << " has been created." << std::endl;
}

Dog::Dog(Dog &copy)
{
	*this = copy;
	std::cout << GRN << this->getType() << NRM << " gets cloned!" << std::endl;
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
	std::cout << GRN << type << NRM << " has been destroyed." << std::endl;
}

std::string Dog::getType() const
{
	return (type);
}

void Dog::makeSound() const
{
	std::cout << "* OOOOFF OOOOOFFF *" << std::endl;
}

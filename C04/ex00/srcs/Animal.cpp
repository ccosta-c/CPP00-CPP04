
#include "../headers/Animal.hpp"

Animal::Animal()
{
	type = "Undef Animal";
	std::cout << GRN << type << NRM << " has been created." << std::endl;
}

Animal::Animal(Animal &copy)
{
	*this = copy;
	std::cout << GRN << this->getType() << NRM << " gets cloned!" << std::endl;
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
	std::cout << GRN << type << NRM << " has been destroyed." << std::endl;
}

std::string Animal::getType() const
{
	return (type);
}
void Animal::makeSound() const
{
	std::cout << "* Strange Animal Noises *" << std::endl;
}

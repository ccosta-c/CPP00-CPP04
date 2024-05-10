
#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	type = "Undefined";
}

WrongAnimal::WrongAnimal(WrongAnimal &copy)
{
	*this = copy;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal &values)
{
	if (this != &values)
	{
		this->type = values.type;
	}
	return(*this);
}

WrongAnimal::~WrongAnimal()
{
}

std::string WrongAnimal::getType() const
{
	return (type);
}
void WrongAnimal::makeSound() const
{
	std::cout << "* Strange WrongAnimal Noises *" << std::endl;
}


#include "../headers/WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	type = "Undefined Wrong Animal";
	std::cout << GRN << type << NRM << " has been created." << std::endl;
}

WrongAnimal::WrongAnimal(WrongAnimal &copy)
{
	*this = copy;
	std::cout << GRN << this->getType() << NRM << " gets cloned!" << std::endl;
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
	std::cout << GRN << type << NRM << " has been destroyed." << std::endl;
}

std::string WrongAnimal::getType() const
{
	return (type);
}
void WrongAnimal::makeSound() const
{
	std::cout << "* Strange WrongAnimal Noises *" << std::endl;
}

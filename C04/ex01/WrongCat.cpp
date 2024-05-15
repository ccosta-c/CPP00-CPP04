
#include "WrongCat.hpp"

WrongCat::WrongCat()
{
	type = "WrongCat";
	std::cout << GRN << type << NRM << " has been created." << std::endl;
}

WrongCat::WrongCat(WrongCat &copy)
{
	*this = copy;
	std::cout << GRN << this->getType() << NRM << " gets cloned!" << std::endl;
}

WrongCat& WrongCat::operator=(const WrongCat &values)
{
	if (this != &values)
	{
		this->type = values.type;
	}
	return(*this);
}

WrongCat::~WrongCat()
{
	std::cout << GRN << type << NRM << " has been destroyed." << std::endl;
}

std::string WrongCat::getType() const
{
	return (type);
}

void WrongCat::makeSound() const
{
	std::cout << "* Mooooo Mooooo *" << std::endl;
}


#include "WrongCat.hpp"

WrongCat::WrongCat()
{
	type = "WrongCat";
}

WrongCat::WrongCat(WrongCat &copy)
{
	*this = copy;
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
}

std::string WrongCat::getType() const
{
	return (type);
}

void WrongCat::makeSound() const
{
	std::cout << "* Mooooo Mooooo *" << std::endl;
}

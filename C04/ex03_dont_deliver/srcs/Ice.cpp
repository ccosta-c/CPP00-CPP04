
#include "../headers/Ice.hpp"

Ice::Ice(): AMateria("ice")
{
	std::cout << "[Ice Constructor called]" << std::endl;
	std::cout << type << "..." << std::endl;
}

Ice::Ice(const Ice &copy): AMateria("ice")
{
	this->type = copy.getType();
	std::cout << "[Copy Ice Constructor called]" << std::endl;
}

Ice& Ice::operator=(const Ice &values)
{
	if (this != &values)
	{
		this->type = values.getType();
	}
	return(*this);
}

AMateria* Ice::clone() const
{
	AMateria *newIce = new Ice(*this);
	return(newIce);
}

Ice::~Ice()
{
	std::cout << "[Ice Destructor called]" << std::endl;
}

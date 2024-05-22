
#include "../headers/Cure.hpp"

Cure::Cure(): AMateria("cure")
{
	std::cout << "[Cure Constructor called]" << std::endl;
	std::cout << type << "..." << std::endl;
}

Cure::Cure(const Cure &copy): AMateria("cure")
{
	this->type = copy.getType();
	std::cout << "[Copy Cure Constructor called]" << std::endl;
}

Cure& Cure::operator=(const Cure &values)
{
	if (this != &values)
	{
		this->type = values.getType();
	}
	return(*this);
}

AMateria* Cure::clone() const
{
	AMateria *newCure = new Cure(*this);
	return(newCure);
}

Cure::~Cure()
{
	std::cout << "[Cure Destructor called]" << std::endl;
}


#include "../headers/AMateria.hpp"

AMateria::AMateria(std::string const & type)
{
	this->type = type;
	std::cout << "[Default AMateria Constructor called]" << std::endl;
}

AMateria::AMateria(AMateria &copy)
{
	this->type = copy.getType();
	std::cout << "[Copy AMateria Constructor called]" << std::endl;
}

AMateria::~AMateria()
{
	std::cout << "[AMateria Destructor called]" << std::endl;
}

AMateria& AMateria::operator=(const AMateria &values)
{
	if (this != &values)
	{
		this->type = values.type;
	}
	return(*this);
}

std::string const& AMateria::getType() const
{
	return(type);
}

void AMateria::use(ICharacter &target)
{
	std::cout << "Uses the " << this->type << " on " << target.getName() << std::endl;
}

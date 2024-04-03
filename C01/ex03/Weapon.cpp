
#include "Weapon.hpp"

const std::string& Weapon::getType( void )
{
	return (type);
}

void Weapon::setType( std::string newOne )
{
	type = newOne;
}

Weapon::Weapon(std::string name)
{
	type = name;
}

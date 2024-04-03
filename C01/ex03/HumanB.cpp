
#include "HumanB.hpp"

void HumanB::attack( void )
{
	if (WeaponB == NULL)
		std::cout << name << " attacks with their bare hands." << "\n";
	else
		std::cout << name << " attacks with their " << WeaponB->getType() << ".\n";
}

HumanB::HumanB( std::string txt )
{
	WeaponB = NULL;
	name = txt;
}

void HumanB::setWeapon (Weapon& Weapon)
{
	WeaponB = &Weapon;
}


#include "HumanA.hpp"

void HumanA::attack( void )
{
	std::cout << name << " attacks with their " << WeaponA.getType() << "\n";
}

HumanA::HumanA( std::string txt, Weapon& Weapon ) : WeaponA(Weapon), name(txt)
{}



#include "DiamondTrap.hpp"

int main (void)
{
	DiamondTrap Joe("Joe");
	ClapTrap TARGET("Target");
	Joe.highFivesGuys();
	Joe.attack("Target");
	std::cout << Joe.getAttackDamage();
	Joe.whoAmI();
}

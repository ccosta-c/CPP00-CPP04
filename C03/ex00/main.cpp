
#include "ClapTrap.hpp"

int main (void)
{
	ClapTrap one("CL4P-TP");
	ClapTrap two("Cluck-Trap");
	one.attack("Cluck-Trap");
	two.takeDamage(9);
	two.beRepaired(1);
}

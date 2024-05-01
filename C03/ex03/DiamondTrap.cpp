
#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(std::string name)
{
	this->_name = name;
	ClapTrap::_name = name.append("_clap_name");
	_hitPoints = FragTrap::_hitPoints;
	_energyPoints =ScavTrap::_energyPoints;
	_attackDamage = FragTrap::_attackDamage;
	std::cout << "Fresh off the assembly line, the monstrous" << GRN << " DiamondTrap " << _name << NRM " spurs to life!" << std::endl;
}

DiamondTrap::DiamondTrap(DiamondTrap &copy)
{
	*this = copy;
}



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
	std::cout << GRN << "DiamondTrap" << _name << NRM "gets cloned!" << std::endl;
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &values)
{
	if (this != &values)
	{
		_name = values._name;
		_hitPoints = values._hitPoints;
		_energyPoints = values._energyPoints;
		_attackDamage = values._attackDamage;
	}
	return (*this);
}

DiamondTrap::~DiamondTrap()
{
	std::cout << GRN << "DiamondTrap " << _name << NRM << " gets wiped out of existence." << std::endl;
}

void DiamondTrap::whoAmI()
{
	std::cout << "Name of DiamondTrap: " << GRN << this->_name << NRM << std::endl;
	std::cout << "Name of ClapTrap: " << GRN << ClapTrap::_name << NRM << std::endl;
}

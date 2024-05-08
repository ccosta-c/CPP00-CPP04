
#include "FragTrap.hpp"

FragTrap::FragTrap()
{
	_name = "NULL";
	_hitPoints = 0;
	_energyPoints = 0;
	_attackDamage = 0;
	std::cout << "New model of a " << GRN << " FragTrap " << NRM << "has appeared!" << std::endl;
}

FragTrap::FragTrap(std::string name)
{
	_name = name;
	_hitPoints = 100;
	_energyPoints = 100;
	_attackDamage = 30;
	std::cout << "Fresh off the assembly line, " << GRN << " FragTrap " << _name << NRM " spurs to life!" << std::endl;
}
FragTrap::FragTrap(FragTrap &copy)
{
	*this = copy;
}

FragTrap &FragTrap::operator=(const FragTrap &values)
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

FragTrap::~FragTrap()
{
	std::cout << GRN << "FragTrap " << _name << NRM << " gets wiped out of existence." << std::endl;
}

void FragTrap::highFivesGuys()
{
	std::cout << GRN << "FragTrap " << _name << NRM << " tries to " << CYAN << " highfive the guys!" << NRM << std::endl;
}

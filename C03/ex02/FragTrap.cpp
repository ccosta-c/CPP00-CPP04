
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
	std::cout << "Fresh off the assembly line, " << GRN << "FragTrap " << _name << NRM " spurs to life!" << std::endl;
}
FragTrap::FragTrap(FragTrap &copy)
{
	*this = copy;
}

FragTrap &FragTrap::operator=(const FragTrap &values)
{
	if (this != &values)
	{
		_name = values.getName();
		_hitPoints = values.getHitPoints();
		_energyPoints = values.getEnergyPoints();
		_attackDamage = values.getAttackDamage();
	}
	return (*this);
}

FragTrap::~FragTrap()
{
	std::cout << GRN << "FragTrap " << _name << NRM << " gets wiped out of existence." << std::endl;
}

void FragTrap::highFivesGuys()
{
	std::cout << GRN << "FragTrap " << _name << NRM << " tries to " << CYAN << " high-five the guys!" << NRM << std::endl;
}

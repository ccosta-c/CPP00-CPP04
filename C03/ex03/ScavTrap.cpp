
#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name) : ClapTrap()
{
	_name = name;
	_hitPoints = 100;
	_energyPoints = 50;
	_attackDamage = 20;
	std::cout << "Fresh off the assembly line, " << GRN << " Scavtrap " << _name << NRM " spurs to life!" << std::endl;
}

ScavTrap::ScavTrap()
{
	_name = "NULL";
	_hitPoints = 0;
	_energyPoints = 0;
	_attackDamage = 0;
	std::cout << "New model of a " << GRN << " Scavtrap " << NRM << "has appeared!" << std::endl;
}

ScavTrap::ScavTrap(ScavTrap &copy)
{
	*this = copy;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &values)
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

ScavTrap::~ScavTrap()
{
	std::cout << GRN << "ScavTrap " << _name << NRM << " gets wiped out of existence." << std::endl;
}

void ScavTrap::guardGate()
{
	std::cout << GRN << "ScavTrap " << _name << NRM << " is now on " << CYAN << " Guard Gate Mode!" << NRM << std::endl;
}

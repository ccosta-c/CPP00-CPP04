
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
	std::cout << GRN << "ScavTrap" << _name << NRM "gets cloned!" << std::endl;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &values)
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

ScavTrap::~ScavTrap()
{
	std::cout << GRN << "ScavTrap " << _name << NRM << " gets wiped out of existence." << std::endl;
}

void ScavTrap::attack(const std::string& target)
{
	if (_energyPoints > 0 && _hitPoints > 0)
	{
		std::cout << GRN << "ScavTrap " << _name << NRM << " attacks " << GRN << target << NRM <<" , causing " << RED << _attackDamage << NRM << " of damage!" << std::endl;
		_energyPoints--;
	}
	else
		std::cout << GRN << "ScavTrap " << _name << NRM << " aims at " << target << " , hand shaking. Their attack fizzles. Out of juice." << std::endl;
}

void ScavTrap::guardGate()
{
	std::cout << GRN << "ScavTrap " << _name << NRM << " is now on " << CYAN << " Guard Gate Mode!" << NRM << std::endl;
}

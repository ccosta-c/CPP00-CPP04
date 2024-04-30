
#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name)
{
	_name = name;
	_hitPoints = 10;
	_energyPoints = 10;
	_attackDamage = 0;
	std::cout << "Fresh off the assembly line, " << GRN << " Claptrap " << _name << NRM " spurs to life!" << std::endl;
}

ClapTrap::ClapTrap()
{
	std::cout << "New model of a Claptrap has appeared!" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap& copy)
{
	*this = copy;
}

ClapTrap& ClapTrap::operator=(const ClapTrap &values)
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

ClapTrap::~ClapTrap()
{
	std::cout << GRN << "ClapTrap " << _name << NRM << " gets wiped out of existence." << std::endl;
}

std::string ClapTrap::getName() const
{
	return(_name);
}

int ClapTrap::getHitPoints() const
{
	return(_hitPoints);
}

int ClapTrap::getEnergyPoints() const
{
	return(_energyPoints);
}

int ClapTrap::getAttackDamage() const
{
	return(_attackDamage);
}

void ClapTrap::attack(const std::string& target)
{
	if (_energyPoints > 0 && _hitPoints > 0)
	{
		std::cout << "ClapTrap " << GRN << _name << NRM << " attacks " << GRN << target << NRM <<" , causing " << RED << _attackDamage << NRM << " of damage!" << std::endl;
		_energyPoints--;
	}
	else
		std::cout << "ClapTrap " << _name << " aims at " << target << " , hand shaking. Their attack fizzles. Out of juice." << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << "ClapTrap " << GRN << _name << NRM << " cries out in pain as they take " << RED << amount << NRM << " points of damage!" << std::endl;
	_hitPoints -= amount;
	if (_hitPoints <= 0)
		std::cout << RED << "All systems offline. Repair impossible. " << BLD << GRN << _name << RED << " is down." << NRM << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (_energyPoints > 0 && _hitPoints > 0)
	{
		_hitPoints += amount;
		_energyPoints--;
		std::cout << "Wrenches tighten, wires mend. " << GRN << _name << NRM << " is being brought back online, restoring " CYAN << amount
		<< NRM << " points, to a total of " CYAN << _hitPoints << NRM << "!" << std::endl;
	}
	else
		std::cout << "Autorepair circuits flicker. Not enough juice. " << _name << " can't be fixed." << std::endl;
}

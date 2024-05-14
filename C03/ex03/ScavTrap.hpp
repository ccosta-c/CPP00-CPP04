
#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap
{
  public:
	ScavTrap(std::string name);
	ScavTrap();
	ScavTrap(ScavTrap &copy);
	ScavTrap &operator=(const ScavTrap &values);
	~ScavTrap();
	void attack(const std::string& target);
	void guardGate();
};

#endif


#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include "FragTrap.hpp"

class DiamondTrap : public FragTrap
{
  private:
	std::string _name;
  public:
	DiamondTrap(std::string name);
	DiamondTrap(DiamondTrap &copy);
	DiamondTrap &operator=(const DiamondTrap &values);
	~DiamondTrap();
	void whoAmI();
};

#endif

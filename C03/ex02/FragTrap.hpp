
#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ScavTrap.hpp"

class FragTrap : public ScavTrap {
  private:
  public:
	FragTrap();
	FragTrap(std::string name);
	FragTrap(FragTrap &copy);
	FragTrap &operator=(const FragTrap &values);
	~FragTrap();
	void highFivesGuys(void);
};


#endif

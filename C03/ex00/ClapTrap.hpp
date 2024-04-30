
#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <string>
#include <iostream>

# define RED "\033[1;31m"
# define NRM "\033[0;37m"
# define GRN "\033[1;32m"
# define BLD "\033[1;37m"
#define CYAN "\033[1;36m"

class ClapTrap {
  private:
	std::string _name;
	int _hitPoints;
	int _energyPoints;
	int _attackDamage;
  public:
	ClapTrap(std::string name);
	ClapTrap(ClapTrap& copy);
	ClapTrap& operator=(const ClapTrap& values);
	~ClapTrap();
	std::string getName() const;
	int getHitPoints() const;
	int getEnergyPoints() const;
	int getAttackDamage() const;
	void attack(const std::string& target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
};

#endif

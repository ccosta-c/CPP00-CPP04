
#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

class DiamondTrap {
  private:

  public:
	DiamondTrap();

	DiamondTrap(DiamondTrap &copy);

	DiamondTrap &operator=(const DiamondTrap &values);

	~DiamondTrap();
};

#endif

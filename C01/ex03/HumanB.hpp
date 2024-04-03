
#ifndef CPP00_CPP04_HUMANB_HPP
#define CPP00_CPP04_HUMANB_HPP

#include <string>
#include "Weapon.hpp"

class HumanB {
  private:
	Weapon* WeaponB;
	std::string name;
  public:
	HumanB( std::string txt );
	void attack ( void );
	void setWeapon ( Weapon& Weapon );
};

#endif

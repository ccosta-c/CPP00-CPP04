
#ifndef CPP00_CPP04_HUMANA_HPP
#define CPP00_CPP04_HUMANA_HPP

#include "Weapon.hpp"

class HumanA {
  private:
	Weapon& WeaponA;
	std::string name;
  public:
	HumanA( std::string txt, Weapon& Weapon);
	void attack ( void );
};

#endif

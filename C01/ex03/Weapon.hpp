
#ifndef CPP00_CPP04_WEAPON_HPP
#define CPP00_CPP04_WEAPON_HPP

#include <string>
#include <iostream>

class Weapon {
  private:
	std::string type;
  public:
	Weapon( std::string name);
	const std::string& getType( void );
	void setType( std::string newOne );
};

#endif

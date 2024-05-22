
#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include <iostream>
#include "AMateria.hpp"
#include "ICharacter.hpp"

class Character : public ICharacter {
  protected:
	AMateria *_inventory[4];
	std::string _name;
  public:
	Character(std::string name);
	Character(Character &copy);
	Character &operator=(const Character &values);
	~Character();

	std::string const & getName() const;
	void equip(AMateria* m);
	void unequip(int idx);
	void use(int idx, ICharacter& target);
};


#endif

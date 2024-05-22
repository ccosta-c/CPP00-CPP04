
#include "../headers/Character.hpp"

Character::Character(std::string name)
{
	_name = name;
	for (int i = 0; i < 4; ++i)
	{
		this->_inventory[i] = NULL;
	}
	std::cout << "[Character Constructor called]" << std::endl;
}

Character::Character(Character &copy)
{
	_name = copy.getName();
	for (int i = 0; i < 4; ++i)
	{
		delete _inventory[i];
		this->_inventory[i] = copy._inventory[i]->clone();
	}
	std::cout << "[Copy Character Destructor called]" << std::endl;
}

Character &Character::operator=(const Character &values)
{
	if (this != &values)
	{
		this->_name = values._name;
		for (int i = 0; i < 4; ++i)
		{
			delete this->_inventory[i];
			this->_inventory[i] = values._inventory[i]->clone();
		}
	}
	return(*this);
}

Character::~Character()
{
	for (int i = 0; i < 4; ++i)
	{
		if (_inventory[i] != NULL)
			delete this->_inventory[i];
	}
	std::cout << "[Character Destructor called]" << std::endl;
}

const std::string &Character::getName() const
{
	return(_name);
}

void Character::equip(AMateria *m)
{
	for (int i = 0; i < 4; ++i)
	{
		if(_inventory[i] == NULL)
		{
			_inventory[i] = m;
			return ;
		}
	}
	std::cout << "No slots available in " << _name << "'s inventory";
}

void Character::unequip(int idx)
{
	if (idx <= 3 && idx >= 0)
	{
		if (_inventory[idx])
		{
			delete _inventory[idx];
			_inventory[idx] = NULL;
		}
	}
}

void Character::use(int idx, ICharacter &target)
{
	if (idx <= 3 && idx >= 0)
	{
		if (_inventory[idx])
		{
			_inventory[idx]->use(target);
		}
	}
}

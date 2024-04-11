
#include "Zombie.hpp"

Zombie::Zombie (void)
{
}

Zombie::~Zombie ( void )
{
	std::cout << name << " didn't eat brains and died...\n";
}

void Zombie::newZombie(std::string x)
{
	this->name = x;
}

std::string Zombie::getName ( void )
{
	return (name);
}

void Zombie::announce()
{
	std::cout << name << ": BraiiiiiiinnnzzzZ...\n";
}

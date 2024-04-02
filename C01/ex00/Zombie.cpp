
#include "Zombie.hpp"

Zombie::Zombie ( std::string x )
{
	name = x;
}

Zombie::~Zombie ( void )
{
	std::cout << name << " didn't eat brains and died...\n";
}

std::string Zombie::Get_Name ( void )
{
	return (name);
}

void Zombie::announce()
{
	std::cout << name << ": BraiiiiiiinnnzzzZ...\n";
}



#include "Brains.hpp"

Brains::Brains()
{
	for (int i = 0; i <= 99; i++)
	{
		ideas[i] = "ola";
	}
}

Brains::Brains(Brains &copy)
{
	*this = copy;
}

Brains& Brains::operator=(const Brains &values)
{
	if (this != &values)
	{
		for(int i = 0; i < 100; i++)
		{
			ideas[i] = values.ideas[i];
		}
	}
	return (*this);
}

Brains::~Brains()
{
}

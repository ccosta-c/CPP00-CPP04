
#include "../headers/Brains.hpp"

Brains::Brains()
{
	for (int i = 0; i <= 99; i++)
	{
		ideas[i] = "ola";
	}
	std::cout << GRN << "Brain" << NRM << " has been created." << std::endl;
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
	std::cout << GRN << "Brain" << NRM << " has been destroyed." << std::endl;
}

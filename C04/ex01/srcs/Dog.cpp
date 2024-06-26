
#include "../headers/Dog.hpp"

Dog::Dog()
{
	type = "Dog";
	_brain = new Brains();
	std::cout << GRN << type << NRM << " has been created." << std::endl;
}

Dog::Dog(Dog &copy)
{
	_brain = new Brains(*copy.getBrain());
	std::cout << GRN << this->getType() << NRM << " gets cloned!" << std::endl;
}

Dog& Dog::operator=(const Dog &values)
{
	if (this != &values)
	{
		this->type = values.type;
		if (this->_brain)
			delete _brain;
		this->_brain = new Brains(*(values.getBrain()));
	}
	return(*this);
}

Dog::~Dog()
{
	delete _brain;
	std::cout << GRN << type << NRM << " has been destroyed." << std::endl;
}

std::string Dog::getType() const
{
	return (type);
}

void Dog::makeSound() const
{
	std::cout << "* OOOOFF OOOOOFFF *" << std::endl;
}

Brains *Dog::getBrain() const
{
	return(_brain);
}

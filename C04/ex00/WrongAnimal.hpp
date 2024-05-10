
#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>

class WrongAnimal
{
  protected:
	std::string type;
  public:
	WrongAnimal();
	WrongAnimal(WrongAnimal &copy);
	WrongAnimal &operator=(const WrongAnimal &values);
	virtual ~WrongAnimal();
	virtual std::string getType() const;
	virtual void makeSound() const;
};

#endif

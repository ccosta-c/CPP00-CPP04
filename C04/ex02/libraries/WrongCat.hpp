
#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
  public:
	WrongCat();
	WrongCat(WrongCat &copy);
	WrongCat &operator=(const WrongCat &values);
	virtual ~WrongCat();
	std::string getType() const;
	void makeSound() const;
};

#endif

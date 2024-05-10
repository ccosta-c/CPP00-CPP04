//
// Created by ccosta-c on 5/8/24.
//

#ifndef CPP00_CPP04_ANIMAL_HPP
#define CPP00_CPP04_ANIMAL_HPP

#include <iostream>

class Animal
{
  protected:
 	std::string type;
  public:
	Animal();
	Animal(Animal &copy);
	Animal &operator=(const Animal &values);
	virtual ~Animal();
	virtual std::string getType() const;
	virtual void makeSound() const;
};


#endif

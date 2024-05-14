
#ifndef CPP00_CPP04_ANIMAL_HPP
#define CPP00_CPP04_ANIMAL_HPP

#include <iostream>

# define RED "\033[1;31m"
# define NRM "\033[0m"
# define GRN "\033[1;32m"
# define BLD "\033[1;37m"
# define CYAN "\033[1;36m"

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

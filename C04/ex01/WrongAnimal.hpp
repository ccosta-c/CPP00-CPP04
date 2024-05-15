
#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>

# define RED "\033[1;31m"
# define NRM "\033[0m"
# define GRN "\033[1;32m"
# define BLD "\033[1;37m"
# define CYAN "\033[1;36m"

class WrongAnimal
{
  protected:
	std::string type;
  public:
	WrongAnimal();
	WrongAnimal(WrongAnimal &copy);
	WrongAnimal &operator=(const WrongAnimal &values);
	virtual ~WrongAnimal();
	std::string getType() const;
	void makeSound() const;
};

#endif

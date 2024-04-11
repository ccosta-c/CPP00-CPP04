
#ifndef C01_ZOMBIE_HPP
#define C01_ZOMBIE_HPP

# include <string>
# include <iostream>

class Zombie {
  public:
	Zombie( void );
	~Zombie( void );
	void newZombie (std::string x);
	void announce( void );
	std::string getName( void );
  private:
	std::string name;
};

Zombie* zombieHorde( int N, std::string name );

#endif

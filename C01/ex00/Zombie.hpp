
#ifndef C01_ZOMBIE_HPP
#define C01_ZOMBIE_HPP

# include <string>
# include <iostream>

class Zombie {
  public:
	Zombie( std::string x );
	~Zombie( void );
	void announce( void );
	std::string Get_Name( void );
  private:
	std::string name;
};

Zombie *newZombie( std::string name );
void randomChump( std::string name );

#endif

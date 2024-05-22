
#include "../headers/AMateria.hpp"
#include "../headers/Ice.hpp"
#include "../headers/Cure.hpp"
#include "../headers/Character.hpp"

int main()
{
	AMateria *ice_spell = new Ice();
	Character *joaquim = new Character("joaquim");
	Character *alberto = new Character("alberto");
	joaquim->equip(ice_spell);
	joaquim->use(0, *alberto);
}

#include "Monsters.h"

std::ostream& operator<<(std::ostream& os, const Monsters& theMonster)
{
	std::cout << "\n******************************\n";
	if (theMonster.alive) {
		std::cout << "Защита монcтра: " << theMonster.protection;
		std::cout << "\nАтака монстра: " << theMonster.attack;
		std::cout << "\nДиапазон урона: " << theMonster.damage_min << "..." << theMonster.damage_max;
		std::cout << "\nЗдоровье монстра: " << theMonster.health;
	}
	else
		std::cout << "Этот персонаж отошёл в лучший мир";
	return os;
	

}
void Monsters::print()
{
	std::cout << *this;
}



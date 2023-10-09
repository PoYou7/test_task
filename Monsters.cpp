#include "Monsters.h"

std::ostream& operator<<(std::ostream& os, const Monsters& theMonster)
{
	std::cout << "\n******************************\n";
	if (theMonster.alive) {
		std::cout << "������ ���c���: " << theMonster.protection;
		std::cout << "\n����� �������: " << theMonster.attack;
		std::cout << "\n�������� �����: " << theMonster.damage_min << "..." << theMonster.damage_max;
		std::cout << "\n�������� �������: " << theMonster.health;
	}
	else
		std::cout << "���� �������� ������ � ������ ���";
	return os;
	

}
void Monsters::print()
{
	std::cout << *this;
}



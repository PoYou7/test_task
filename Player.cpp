#include "Player.h"


std::ostream& operator<<(std::ostream& os, const Player& thePlayer)
{
	if(thePlayer.alive){
	std::cout << "\n******************************\n";
	std::cout << "Защита игрока: " << thePlayer.protection;
	std::cout << "\nАтака игрока: " << thePlayer.attack;
	std::cout << "\nДиапазон урона: " << thePlayer.damage_min << "..." << thePlayer.damage_max;
	std::cout << "\nЗдоровье игрока: " << thePlayer.health;
	std::cout << "\nОсталось исцелений: " << thePlayer.healing;
	}
	else
		std::cout << "Этот персонаж отошёл в лучший мир";
	return os;
}
void Player::print()
{
	std::cout << *this;
}

void Player::incr_health()
{
	if (healing > 0)
	{
		--healing;
		
		health += (unsigned)(maximum_health * 0.3);
		std::cout << "\nЗдоровье игрока после хила " << health;
	}
	else
	{
		std::cout << "\nВсе хилки потрачены!";
	}
	
}


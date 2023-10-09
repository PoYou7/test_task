#include "Player.h"


std::ostream& operator<<(std::ostream& os, const Player& thePlayer)
{
	if(thePlayer.alive){
	std::cout << "\n******************************\n";
	std::cout << "������ ������: " << thePlayer.protection;
	std::cout << "\n����� ������: " << thePlayer.attack;
	std::cout << "\n�������� �����: " << thePlayer.damage_min << "..." << thePlayer.damage_max;
	std::cout << "\n�������� ������: " << thePlayer.health;
	std::cout << "\n�������� ���������: " << thePlayer.healing;
	}
	else
		std::cout << "���� �������� ������ � ������ ���";
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
		std::cout << "\n�������� ������ ����� ���� " << health;
	}
	else
	{
		std::cout << "\n��� ����� ���������!";
	}
	
}


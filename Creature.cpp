#include "Creature.h"


Creature::Creature(unsigned _attack, unsigned _protection, unsigned maximum_health, unsigned _damage_min, unsigned _damage_max)
{
	if (_attack <= 30 && _attack >= 1 &&
		_protection <= 30 && _protection >= 1)
	{
		attack = { _attack };
		protection = { _protection };
	}
	else
	{
		std::cout << "������������ �������� �����/������";
		attack = 0;
		protection = 0;
	}

	this->maximum_health = maximum_health;
	srand(time(NULL));
	health = rand() % maximum_health;
	damage_min = _damage_min;
	damage_max = _damage_max;
	alive = (health > 0) ? true : false;
}

std::ostream& operator<<(std::ostream& os, const Creature& theCreature)
{
	std::cout << "\n******************************\n";
	std::cout << "������ ��������: " << theCreature.protection;
	std::cout << "\n����� �������� : " << theCreature.attack;
	std::cout << "\n�������� �����: " << theCreature.damage_min << "..." << theCreature.damage_max;
	std::cout << "\n�������� ��������: " << theCreature.health;
	return os;
}
void Creature::print()
{
	std::cout << *this;
}

void deal_damage(Creature& opp_1_a, Creature& opp_2_d)
{
	std::cout << "\n���������� ��������: ";
	bool success_of_the_attack(unsigned);
	unsigned attack_modifier = (opp_1_a.attack - opp_2_d.protection) + 1;
	
	if (success_of_the_attack(attack_modifier))
	{
		srand(time(NULL));
		unsigned dam = opp_1_a.damage_min + rand() % opp_1_a.damage_max;
		
		int temp_health = (int)opp_2_d.health - (int)dam;

		
		if (temp_health <= 0)
		{
			std::cout << "��������� ���!";
			opp_2_d.health = 0;
			opp_2_d.alive = false;
		}
	}
	else
		std::cout << "\n��� �� �������, ���� �� ������";
}

bool success_of_the_attack(unsigned size)
{
	
	for (unsigned i = 0; i < size; i++)
	{
		unsigned t_f = rand() % 6;
		if (t_f == 5 || t_f == 6)
			return true;
	}
	return false;
}
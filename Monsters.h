#pragma once
#include "Creature.h"
class Monsters :
    public Creature
{
  
public:
	Monsters() :Creature() {}

	Monsters(unsigned _attack, unsigned _protection, unsigned maximum_health, unsigned damage_min,unsigned damage_max)
		: Creature(_attack, _protection, maximum_health, damage_min, damage_max)  {    };

	~Monsters()
	{

	}
	friend std::ostream& operator<<(std::ostream&, const Monsters&);
	void print();
	
	friend void deal_damage(Creature&, Creature&);

};



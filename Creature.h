#pragma once
#include<iostream>
#include<cstdlib>
#include<ctime>
class Creature
{
protected:
	unsigned attack;
	unsigned protection;
	unsigned health;
	unsigned damage_min;
	unsigned damage_max;
	unsigned maximum_health;
	bool alive;

public:
	Creature() : attack{ 0 }, protection{ 0 }, health{ 0 }, damage_min{ 0 }, damage_max{ 0 }, maximum_health{ 0 }, alive{ false }{}
	Creature(unsigned, unsigned, unsigned, unsigned, unsigned);
	virtual ~Creature()
	{

	}

	friend std::ostream& operator<<(std::ostream&, const Creature&);
	virtual void print();

	friend void deal_damage(Creature&, Creature&);

};


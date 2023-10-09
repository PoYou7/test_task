#pragma once
#include "Creature.h"
#include<iostream>

class Player :
    public Creature
{
    unsigned healing;
public:
    Player() :Creature(), healing{ 4 }{}
    Player(unsigned _attack, unsigned _protection, unsigned maximum_health, unsigned damage_min, unsigned damage_max)
        : Creature(_attack, _protection, maximum_health, damage_min, damage_max), healing{ 4 }    {    }
    ~Player()
    {

    }
    friend std::ostream& operator<<(std::ostream&, const Player&);
    void incr_health();
    void print();
    unsigned get_protection() { return protection; }


    friend void deal_damage(Creature&, Creature&);
};


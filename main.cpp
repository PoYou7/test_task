#include<iostream>
#include"Creature.h"
#include"Player.h"
#include"Monsters.h"
//Условия:
//1) В игре есть Существа.К ним относятся Игрок и Монстры.
//2) У Существа есть параметры Атака и Защита.Это целые числа от 1 до 30.
//3) У Существа есть Здоровье.Это натуральное число от 0 до N.Если Здоровье становится
//равным 0, то Существо умирает. Игрок может себя исцелить до 4 - х раз на 30 % от
//максимального Здоровья.
//4) У Существа есть параметр Урон.Это диапазон натуральных чисел M - N.Например, 1 - 6.
//5) Одно Существо может ударить другое по такому алгоритму :
//-Рассчитываем Модификатор атаки.Он равен разности Атаки атакующего и Защиты
//защищающегося плюс 1
//- Успех определяется броском N кубиков с цифрами от 1 до 6, где N - это Модификатор
//атаки.Всегда бросается хотя бы один кубик.
//- Удар считается успешным, если хотя бы на одном из кубиков выпадает 5 или 6
//- Если удар успешен, то берется произвольное значение из параметра Урон атакующего и
//вычитается из Здоровья защищающегося.



//example
int main()
{
	setlocale(LC_ALL, "ru");
	void add_hero(Creature&);
	void add_monster(Creature&);

	std::cout << "Start:\n";
	//создание игрока
	std::cout << "Необходимо создать героя, которым вы сможете атаковать монстров: ";
	Creature* theCreature_1 = new Player;
	add_hero(*theCreature_1);
	std::cout << "Это ваш игрок: \n";
	theCreature_1->print();


	//создание монстра
	std::cout << "\nНеобходимо создать монстра, с которым вы сможете сражаться: ";
	Creature* theCreature_2 = new Monsters;
	add_monster(*theCreature_2);
	std::cout << "\nЭто монстр, с которым вам предстоит сразиться!";
	theCreature_2->print();

	deal_damage(*theCreature_1, *theCreature_2);
	theCreature_1->print();
	theCreature_2->print();


	system("pause>nul");
	return 0;

}
void add_hero(Creature& hero)
{
	unsigned _attack, _protection, maximum_health, _damage_min, _damage_max;
	std::cout << "Введите характеристики героя: ";
	
	std::cout << "\nАтака: "; std::cin >> _attack;
	std::cout << "Защита: "; 	std::cin >> _protection;
	std::cout << "Максимальное здоровье: "; std::cin >> maximum_health;
	std::cout << "Минимальный урон: "; std::cin >> _damage_min;
	std::cout << "Максимальный урон: "; std::cin >> _damage_max;
	
	Creature* temp = new Player(_attack, _protection, maximum_health, _damage_min, _damage_max);
	//hero.~Creature();
	hero = *temp;
}
void add_monster(Creature& monster)
{
	unsigned _attack, _protection, maximum_health, _damage_min, _damage_max;
	std::cout << "Введите характеристики монстра: ";

	std::cout << "\nАтака: "; std::cin >> _attack;
	std::cout << "Защита: "; 	std::cin >> _protection;
	std::cout << "Максимальное здоровье: "; std::cin >> maximum_health;
	std::cout << "Минимальный урон: "; std::cin >> _damage_min;
	std::cout << "Максимальный урон: "; std::cin >> _damage_max;

	Creature* temp = new Monsters(_attack, _protection, maximum_health, _damage_min, _damage_max);
	//monster.~Creature();
	monster = *temp;
}


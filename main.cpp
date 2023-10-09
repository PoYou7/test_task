#include<iostream>
#include"Creature.h"
#include"Player.h"
#include"Monsters.h"
//�������:
//1) � ���� ���� ��������.� ��� ��������� ����� � �������.
//2) � �������� ���� ��������� ����� � ������.��� ����� ����� �� 1 �� 30.
//3) � �������� ���� ��������.��� ����������� ����� �� 0 �� N.���� �������� ����������
//������ 0, �� �������� �������. ����� ����� ���� �������� �� 4 - � ��� �� 30 % ��
//������������� ��������.
//4) � �������� ���� �������� ����.��� �������� ����������� ����� M - N.��������, 1 - 6.
//5) ���� �������� ����� ������� ������ �� ������ ��������� :
//-������������ ����������� �����.�� ����� �������� ����� ���������� � ������
//������������� ���� 1
//- ����� ������������ ������� N ������� � ������� �� 1 �� 6, ��� N - ��� �����������
//�����.������ ��������� ���� �� ���� �����.
//- ���� ��������� ��������, ���� ���� �� �� ����� �� ������� �������� 5 ��� 6
//- ���� ���� �������, �� ������� ������������ �������� �� ��������� ���� ���������� �
//���������� �� �������� �������������.



//example
int main()
{
	setlocale(LC_ALL, "ru");
	void add_hero(Creature&);
	void add_monster(Creature&);

	std::cout << "Start:\n";
	//�������� ������
	std::cout << "���������� ������� �����, ������� �� ������� ��������� ��������: ";
	Creature* theCreature_1 = new Player;
	add_hero(*theCreature_1);
	std::cout << "��� ��� �����: \n";
	theCreature_1->print();


	//�������� �������
	std::cout << "\n���������� ������� �������, � ������� �� ������� ���������: ";
	Creature* theCreature_2 = new Monsters;
	add_monster(*theCreature_2);
	std::cout << "\n��� ������, � ������� ��� ��������� ���������!";
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
	std::cout << "������� �������������� �����: ";
	
	std::cout << "\n�����: "; std::cin >> _attack;
	std::cout << "������: "; 	std::cin >> _protection;
	std::cout << "������������ ��������: "; std::cin >> maximum_health;
	std::cout << "����������� ����: "; std::cin >> _damage_min;
	std::cout << "������������ ����: "; std::cin >> _damage_max;
	
	Creature* temp = new Player(_attack, _protection, maximum_health, _damage_min, _damage_max);
	//hero.~Creature();
	hero = *temp;
}
void add_monster(Creature& monster)
{
	unsigned _attack, _protection, maximum_health, _damage_min, _damage_max;
	std::cout << "������� �������������� �������: ";

	std::cout << "\n�����: "; std::cin >> _attack;
	std::cout << "������: "; 	std::cin >> _protection;
	std::cout << "������������ ��������: "; std::cin >> maximum_health;
	std::cout << "����������� ����: "; std::cin >> _damage_min;
	std::cout << "������������ ����: "; std::cin >> _damage_max;

	Creature* temp = new Monsters(_attack, _protection, maximum_health, _damage_min, _damage_max);
	//monster.~Creature();
	monster = *temp;
}


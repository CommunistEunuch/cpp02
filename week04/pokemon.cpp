#include "pokemon.h"
#include "pikachu.h"

Pokemon::Pokemon()
{
	cout << "�⺻(���ϸ�) ������\n";
}

Pokemon::~Pokemon()
{
	cout << "�θ�Ŭ����(���ϸ�) �Ҹ��� \n";
}

void Pokemon::attack() const
{
	cout << "���� !" << endl;
}
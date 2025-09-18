#include "pokemon.h"
#include "pikachu.h"

Pokemon::Pokemon()
{
	cout << "기본(포켓몬) 생성자\n";
}

Pokemon::~Pokemon()
{
	cout << "부모클래스(포켓몬) 소멸자 \n";
}

void Pokemon::attack() const
{
	cout << "공격 !" << endl;
}
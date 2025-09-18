#include "pikachu.h"

Pikachu::Pikachu()
{
	cout << "기본(피카츄) 생성자 \n";
}

Pikachu::~Pikachu()
{
	cout << "자식클래스(피카츄) 소멸자 \n";
}

void Pikachu::attack()
{
	cout << "Electric Ball" << endl;
} 
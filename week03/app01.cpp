#include <iostream>
#include <string>
using namespace std;
// 베이스 클래스의 정의
class Pokemon
{
public:
	virtual void attack() const { cout << "공격 !" << endl; }
};
// 파생 클래스의 정의
class Pikachu : public Pokemon //is-a
{
public:
	virtual void attack() const { cout << "Electric Ball" << endl; }
};
int main()
{
	Pokemon* pokemon;
	pokemon = new Pokemon();
	pokemon->attack();
	delete pokemon;
	pokemon = new Pikachu();
	pokemon->attack();
	delete pokemon;
	return 0;
}
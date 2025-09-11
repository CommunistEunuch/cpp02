#include <iostream>
#include <string>
using namespace std;
class Pokemon
{
public:
	virtual void attack() const { cout << "공격 !" << endl; } //3. virtual 함수로 생성
};
class Pikachu : public Pokemon //is-a
{
public:
	virtual void attack() const { cout << "Electric Ball" << endl; } //3. virtual 함수로 생성
};
int main()
{
	Pokemon* pokemon; //1. 포인터 변수
	
	pokemon = new Pokemon(); //2. 객체 호환 가능
	pokemon->attack();
	delete pokemon;

	pokemon = new Pikachu(); //2. 객체 호환 가능
	pokemon->attack();
	delete pokemon;
	
	return 0;
}
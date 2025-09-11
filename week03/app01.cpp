#include <iostream>
#include <string>
using namespace std;
/*------ 다형성의 조건 --------
1. 포인터 변수 
2. 객체 호환 가능
3. virtual 함수로 생성
*/
class Pokemon
{
public:
	Pokemon() { cout << "기본(포켓몬) 생성자\n"; }
	~Pokemon() { cout << "부모클래스(포켓몬) 소멸자 \n"; }
	virtual void attack() const { cout << "공격 !" << endl; } //3. virtual 함수로 생성
};
class Pikachu : public Pokemon //is-a
{
public:
	Pikachu() { cout << "기본(피카츄) 생성자 \n"; }
	~Pikachu() { cout << "자식클래스(피카츄) 소멸자 \n"; }
	void attack() const { cout << "Electric Ball" << endl; } //3. virtual 함수로 생성
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
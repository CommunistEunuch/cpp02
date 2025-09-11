#include <iostream>
#include <string>
using namespace std;
class Pokemon
{
public:
	virtual void attack() const { cout << "���� !" << endl; } //3. virtual �Լ��� ����
};
class Pikachu : public Pokemon //is-a
{
public:
	virtual void attack() const { cout << "Electric Ball" << endl; } //3. virtual �Լ��� ����
};
int main()
{
	Pokemon* pokemon; //1. ������ ����
	
	pokemon = new Pokemon(); //2. ��ü ȣȯ ����
	pokemon->attack();
	delete pokemon;

	pokemon = new Pikachu(); //2. ��ü ȣȯ ����
	pokemon->attack();
	delete pokemon;
	
	return 0;
}
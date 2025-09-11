#include <iostream>
#include <string>
using namespace std;
/*------ �������� ���� --------
1. ������ ���� 
2. ��ü ȣȯ ����
3. virtual �Լ��� ����
*/
class Pokemon
{
public:
	Pokemon() { cout << "�⺻(���ϸ�) ������\n"; }
	~Pokemon() { cout << "�θ�Ŭ����(���ϸ�) �Ҹ��� \n"; }
	virtual void attack() const { cout << "���� !" << endl; } //3. virtual �Լ��� ����
};
class Pikachu : public Pokemon //is-a
{
public:
	Pikachu() { cout << "�⺻(��ī��) ������ \n"; }
	~Pikachu() { cout << "�ڽ�Ŭ����(��ī��) �Ҹ��� \n"; }
	void attack() const { cout << "Electric Ball" << endl; } //3. virtual �Լ��� ����
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
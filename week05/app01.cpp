#include <iostream>
#include <string>
#include <typeinfo> 
using namespace std;

class Animal {
public:
	virtual void makeSound() {
		cout << "cry \n";
	};
};
class Dog : public Animal {
public:
	void makeSound() {
		cout << "wang wang \n";
	};
};
class Cat : public Animal {
public:
	void makeSound() {
		cout << "Yaong \n";
	};
};

int main()
{
	Animal* pa = new Dog(); //up-casting
	pa->makeSound();
	cout << pa << endl;

	//Cat* pc = (Cat*)pa; //Dangerous behavior, And Run smoothly, terrible
	//Cat* pc = dynamic_cast<Cat*>(pa); //Safe. �����Ŭ������ �����Ͱ� ������ Ŭ������ �޸� �����ּҸ� ���� �� ����(null)
	Dog* pc = dynamic_cast<Dog*>(pa); //���� �Ҵ�� ������Ŭ���� ��ü�� �޸� ���� �ּҸ� �޴´�.

	pc->makeSound();
	cout << pc << endl;
	delete pc;
	pc = nullptr;

	//Dog* pd = (Dog*)pa; //down-casting, old style (C style)
	//Dog* pd = dynamic_cast<Dog*>(pa); //dynamic-cast
	//pd->makeSound();
	//delete pa;
	//pa = nullptr;




	return 0;
}
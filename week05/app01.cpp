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
	//Cat* pc = dynamic_cast<Cat*>(pa); //Safe. 고양이클래스의 포인터가 강아지 클래스의 메모리 번지주소를 받을 수 없다(null)
	Dog* pc = dynamic_cast<Dog*>(pa); //힙에 할당된 강아지클래스 객체의 메모리 번지 주소를 받는다.

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
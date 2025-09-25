#include <iostream>
#include <string>
#include <typeinfo> 
using namespace std;

class Animal {
public:
	virtual void makeSound()=0;
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
	//Animal animal;
	//animal.makeSound();

	Animal animal; //순수 가상함수
	return 0;
}
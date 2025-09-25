#include <iostream>
#include <string>
#include <typeinfo> 
using namespace std;

class Animal {
public:
	void makeSound() {
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
	Animal* pa = new Animal();
	pa->makeSound();
	delete pa;
	return 0;
}
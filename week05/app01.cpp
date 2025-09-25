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
	Animal a;
	Dog d;
	Cat i;

	cout << typeid(a).name() << endl;
	d.makeSound();
	return 0;
}
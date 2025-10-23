#include <iostream>
#include <string>
using namespace std;

class Pokemon {
private:
	int level;
	string name;
public:
	Pokemon(const string& name, int level) : name(name), level(level){}
	int getLevel() const{
		return level;
	}
	void setLevel() {

	}
	string getName() const{
		return name;
	}
	void setName() {

	}
};

ostream& operator<<(ostream& o, const Pokemon& p) {
	o << "Pokemon name : " << p.getName() << "(" << p.getLevel() << ")" << endl;
	return o;
};

	int main() {
		Pokemon p1("Pikachu", 5);
		Pokemon p2("Squirtle", 3);

		cout << p1 << endl;
		cout << p2 << endl;

		return 0;

	}

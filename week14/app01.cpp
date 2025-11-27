//#include "stack.cpp"
//
//class Pokemon {
//private:
//	int hp;
//	string name;
//public:
//	Pokemon(): hp(1), name("무명") {};
//	Pokemon(int hp, string name) : hp(hp), name(name) {
//		cout << name << " 포켓몬 생성됨 \n" <<  endl;
//	};
//	int getHp() const{
//		return hp;
//	};
//	string getName() {
//		return name;
//	}
//};
////class Pikachu : public Pokemon {
////public:
////	Pikachu() {};
////	void attack() { "전기공격 \n" };
////};
////
////class Squirtle : public Pokemon {
////public:
////	Squirtle() {};
////	void attack() { "물공격 \n" };
////};
//
////연산자 오버로딩 복습했다고 합시당
//ostream& operator<<(ostream& o, Pokemon& right) {
//	o << right.getName() << "hp:" << right.getHp() << endl;
//	return o;
//}
//
//int main() {
//	//Pokemon p1;//추상클래스의 인스턴스(바로 생성) 생성 불가
//	//Pokemon* pikachu = new Pikachu(); //업케스팅, 힙메모리 생성
//	//Pikachu p1; //스택 메모리에 생성
//	//Squirtle s1;
//
//	//Stack<Pokemon> stackp(2);
//	Pokemon Pikachu(100, "피카츄");
//	Pokemon Squirtle(100, "꼬부기");
//
//	Stack<Pokemon> stackp(2);
//	stackp.push(Pikachu);
//	stackp.push(Squirtle);
//	stackp.pop();
//	stackp.pop();
//
//	return 0;
//}
//
//
////int main()
////{
////	Stack<int> stacki(10);
////	Stack<double> stackd(10);
////	stacki.push(5);
////	stacki.push(6);
////	stacki.push(7);
////	stacki.push(3);
////	cout << stacki.pop() << endl;
////	cout << stacki.pop() << endl;
////	cout << stackd.pop();
////	return 0;
////}
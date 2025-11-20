#include <iostream>
using namespace std;

template <typename T> //Templete specialization
void display(T value) {
	cout << "specialized display for char : " << value << endl;

}
template <> //Templete specialization
void display<char>(char value) {
	cout << "specialized display for char : " << value << endl;

}
template <> //Templete specialization
void display<const char*>(const char* value) {
	cout << "specialized display for c styling : " << value << endl;
}

int main(){
	display(50);
	display('2');
	display("1");
	display(0);
	return 0;
}
#include <iostream>
using namespace std;

class Complex {
private:
	int real;
	int imaginary;

public:
	Complex() : real(0), imaginary(0) {
	}
	Complex(int real, int imaginary) : real(real), imaginary(imaginary) {
	}
	/// //////////////////////////////////////////
	void setReal(int real) {
		//real = real;
		this->real = real;
	}

	int getReal() const {
		return real;
	}
	//////////////////////////////////////////////
	void setImaginary(int imaginary) {
		this->imaginary = imaginary;
	}

	int getimaginary() const {
		return imaginary;
	}
	///////////////////////////////////////////////
	//Complex operator+(const Complex& right) {
	//	int r = this->real + right.real;
	//	int i = this->imaginary + right.imaginary;
	//	return Complex(r, i);
	//	//return Complex(r, this->imaginary); 
	//}

	Complex operator++(int) {  
		Complex previous(this->real, this->imaginary);
		this->real = this->real + 1;
		return previous;
	}

	Complex operator++() {  
		this->real++;
		return Complex(this->real, this->imaginary);
	}
};

//멤버함수였던 오퍼레이터를 논멤버함수로 옮김
Complex operator+ (const Complex& left, const Complex& right) {
	int r = left.getReal() + right.getReal();
	int i = left.getimaginary() + right.getimaginary();
	return Complex(r, i);
}

//레퍼런스 타입
// cout << c4 << endl; //이 코드를 실행시키기 위한 오버로딩
	ostream& operator<<(ostream& o, Complex right) {
		o << right.getReal() << " + " << right.getimaginary() << "i";
		return o;
	}


/// //////////////////////////////////////////////
int main() {
	Complex c1;
	Complex c2(10, 7);
	c1.setReal(5);
	c1.setImaginary(3);

	Complex c3 = c1 + c2;  
	//아래의 코드는 작동불가 (operator를 nonmember로 바꾸면서 해당하는 operator+가 사라짐)
	// Complex c3 = c1.operator+(c2); //(X)
	//따라서, 작동하게 만든 논멤버함수의 정의대로 따라서 작성해야함
	Complex c3 = operator+(c1, c2);  //(O)

	//Complex c4 = c3++;	
	Complex c4 = ++c3;
	cout << c3.getReal() << "+" << c3.getimaginary() << "i" << endl;
	cout << c4.getReal() << "+" << c4.getimaginary() << "i" << endl;

	cout << c4 << endl; //this is problem

	return 0;
}
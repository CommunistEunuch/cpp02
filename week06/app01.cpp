#include <iostream>
using namespace std;

class Complex {
private:
	int real;
	int imaginary;

//public:
//	void setReal(int real) : rela(real){
//		this->real = real;
//	} //당연히 안되지 이 양반아

public:
	Complex() {}
	Complex(int real, int imaginary) :real(real), imaginary(imaginary) {}
	void setReal(int real) {
		this->real = real;
	}
	int getReal() const {
		return real;
	}
	void setImaginary(int imaginary) {
		this->imaginary = imaginary;
	}
	int getImaginary() const {
		return imaginary;
	}
	//오늘의 주된 수업 내용 : 연산자 오버로딩
	Complex operator+(const Complex& right) {
		int r = this->real + right.real;
		int i = this->imaginary + right.imaginary;

		return Complex(r,i);
	}
};

int main() {
	Complex c1, c2;
	//Complex c1(5, 3);

	c1.setReal(5);
	c1.setImaginary(3);
	c2.setReal(10);
	c2.setImaginary(7);

	cout << c1.getReal() << "+" << c1.getImaginary() << "i" << endl;
	cout << c2.getReal() << "+" << c2.getImaginary() << "i" << endl;
	//Complex c3 = c1 + c2; //이걸 어케 계산해요 주인님

	Complex c3 = c1 + c2; 
	cout << c3.getReal() << "+" << c3.getImaginary() << "i" << endl;

	return 0;
}

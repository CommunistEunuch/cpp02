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

		return Complex(r, i);
		//return Complex(r, this->imaginary) // 가능하지만 수학적으로 잘못됨.
	}

	Complex operator++(int) { //tag : c3.real+1 (피연산자가 2개가 아닌 1개라서 명시해야함.) (후위연산)
		Complex previous(this->real, this->imaginary);
		this->real = this->real + 1;
		return previous;
	}

	Complex operator++() { //전위연산
		this->real++;
		return Complex(this->real, this->imaginary);
	}
};

int main() {
	Complex c1;
	Complex c2(10, 7);

	c1.setReal(5);
	c1.setImaginary(3);

	cout << c1.getReal() << "+" << c1.getImaginary() << "i" << endl;
	cout << c2.getReal() << "+" << c2.getImaginary() << "i" << endl;
	//Complex c3 = c1 + c2; //이걸 어케 계산해요 주인님

	Complex c3 = c1 + c2; // Complex c3 = c1.operator+(c2); 
	cout << c3.getReal() << "+" << c3.getImaginary() << "i" << endl;

	Complex c4 = c3++;
	Complex c5 = ++c3;

	//c3++; //real값만 1 증가
	cout << c3.getReal() << "+" << c3.getImaginary() << "i" << endl;
	cout << c4.getReal() << "+" << c4.getImaginary() << "i" << endl;
	cout << c5.getReal() << "+" << c5.getImaginary() << "i" << endl;

	return 0;
}
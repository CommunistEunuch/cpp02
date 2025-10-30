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
	
	void setReal(int real) {
		//real = real;
		this->real = real;
	}
	int getReal() const {
		return real;
	}
	void setImaginary(int imaginary) {
		this->imaginary = imaginary;
	}
	int getimaginary() const {
		return imaginary;
	}

	Complex operator++(int) {  // ��������
		Complex previous(this->real, this->imaginary);
		this->real = this->real + 1;
		return previous;
	}
	Complex operator++() {  // ��������
		this->real++;
		return Complex(this->real, this->imaginary);
	}

	// member function (method)
	friend ostream& operator<<(ostream& o, const Complex& right) {
		//o << right.getReal() << "+" << right.getimaginary() << "i";
		o << right.real << "+" << right.imaginary << "i";
		return o;
	}
};

// non member function
Complex operator+(const Complex& left, const Complex& right) {
	int r = left.getReal() + right.getReal();
	int i = left.getimaginary() + right.getimaginary();
	return Complex(r, i);
}

Complex operator+(int left, const Complex& right) {
	return Complex(left + right.getReal(), right.getimaginary());
}

istream& operator>>(istream& i, Complex& right) {
	int real, imag;

	cout << "Input real value : ";
	i >> real;
	right.setReal(real);

	cout << "Input imaginary value : ";
	i >> imag;
	right.setImaginary(imag);

	return i;
}

int main() {
	Complex c1(10, 7);
	cout << c1 << endl;
	
	Complex c2 = (5 + c1);
	cout << c2 << endl;

	//cout << (5 + c1) << endl;

	return 0;
}
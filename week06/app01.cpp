#include <iostream>
using namespace std;

class Complex {
private:
	int real;
	int imaginary;

	//public:
	//	void setReal(int real) : rela(real){
	//		this->real = real;
	//	} //�翬�� �ȵ��� �� ��ݾ�

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
	//������ �ֵ� ���� ���� : ������ �����ε�
	Complex operator+(const Complex& right) {
		int r = this->real + right.real;
		int i = this->imaginary + right.imaginary;

		return Complex(r, i);
		//return Complex(r, this->imaginary) // ���������� ���������� �߸���.
	}

	Complex operator++(int) { //tag : c3.real+1 (�ǿ����ڰ� 2���� �ƴ� 1���� ����ؾ���.) (��������)
		Complex previous(this->real, this->imaginary);
		this->real = this->real + 1;
		return previous;
	}

	Complex operator++() { //��������
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
	//Complex c3 = c1 + c2; //�̰� ���� ����ؿ� ���δ�

	Complex c3 = c1 + c2; // Complex c3 = c1.operator+(c2); 
	cout << c3.getReal() << "+" << c3.getImaginary() << "i" << endl;

	Complex c4 = c3++;
	Complex c5 = ++c3;

	//c3++; //real���� 1 ����
	cout << c3.getReal() << "+" << c3.getImaginary() << "i" << endl;
	cout << c4.getReal() << "+" << c4.getImaginary() << "i" << endl;
	cout << c5.getReal() << "+" << c5.getImaginary() << "i" << endl;

	return 0;
}
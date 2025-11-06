#include "DynamicArray.h"
#include <iostream>
using namespace std;
DynamicArray::DynamicArray()
{
}

DynamicArray::DynamicArray(int size)
{
	cout << "동적배열 생성" << endl;
	ptr = new int[size];

}

DynamicArray::~DynamicArray()
{
	cout << "동적배열 해제" << endl;
	delete[]ptr;
}

int DynamicArray::getAt(int index)
{
	return ptr[index];
}

void DynamicArray::setAt(int index, int value)
{
	ptr[index] = value;

}

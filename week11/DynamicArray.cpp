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

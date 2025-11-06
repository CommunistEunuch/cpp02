#include "DynamicArray.h"
#include <iostream>
using namespace std;
DynamicArray::DynamicArray()
{
}

DynamicArray::DynamicArray(int size)
{
	try{
		//this->size = size;
		ptr = new int[size];
		cout << "悼利硅凯 积己" << endl;
		throw "4885";
	}
	catch (...) {
		delete[]ptr;
		cout << "赛 皋葛府 秦力(积己磊 救率)" << endl;
		throw;
	}
}

DynamicArray::~DynamicArray()
{
	cout << "悼利硅凯 秦力" << endl;
	delete[]ptr;
}

int DynamicArray::getAt(int index)
{
	if (index >= size || index < 0)
		return 1;
	return ptr[index];
}

void DynamicArray::setAt(int index, int value)
{
	if (index >=  size || index < 0) 
			throw 0;
	ptr[index] = value;
}

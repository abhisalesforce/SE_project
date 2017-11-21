#include<iostream>
#include <vector>
#include<string>
//#include "IntStack.cpp"
#include "ObStack.h"
using namespace std;
template<typename T>
T ObStack<T>::pop()
{
	const int last = this->size() - 1;
	return this->clear(last);
}
template<typename T>
void ObStack<T>::push(T const O)
{
	this->push_back(O);
}
template<typename T>
T ObStack<T>::peek()
{
	return this->at(this->size() - 1);
}

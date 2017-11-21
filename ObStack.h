#ifndef _OBSTACK_
#define _OBSTACK_
#include<iostream>
#include <vector>
#include<string>
using namespace std;
template<typename T>
class ObStack : public std::vector<T>
{
private: static const long serialVersionUID = 1L;
public: 
	T pop();
	void push(T const O);
	T peek();
};
#endif
#pragma once
#include "node.h"
class list {
public:
	Node * first;
	void addElement(int number);
	list();
	~list();
private:
	bool isPrime(int checkNumber);

};
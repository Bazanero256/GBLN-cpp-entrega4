#pragma once
#include "node.h"
class list {
public:
	void addElement(int number);
	list();
	~list();
private:
	Node * first;
	bool isPrime(int checkNumber);

};
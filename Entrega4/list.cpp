#include "stdafx.h"
#include "list.h"
#include "node.h"
#include <iostream>


void list::addElement(int number)
{
	if (!isPrime(number)) {
		std::cout << " el numero ingresado no es primo, por favor ingrese un numero primo" << std::endl;
	
	}
	else {
		if (this->first == nullptr) {
			Node* newElement = new Node(number);
			this->first = newElement;
			std::cout << "El elemento fue agregado" << std::endl;
		}
		else {
			Node* newElement = new Node(number);
			Node * iPtr = this->first;
			while (iPtr->next != nullptr) {
				iPtr = iPtr->next;
			}
			newElement->prev = iPtr;
			iPtr->next = newElement;
			std::cout << "El elemento fue agregado" << std::endl;
		}
	}
}

list::list() {
	 first = nullptr;
}

list::~list()
{
	Node * iPtr = this->first;
	while (iPtr->next != nullptr) {
		iPtr = iPtr->next;
		delete iPtr->prev;
	}
	
}

bool list::isPrime(int checkNumber)
{
	int i = 2;
	bool result = true;
	while (i <= (checkNumber / 2) && result) {
		if (checkNumber % i == 0) {
			result = false;
		}
		++i;
	}
	return result;
}

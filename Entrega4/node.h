#pragma once

class Node {
public:
	Node* next;
	Node* prev;
	Node(int value);
private:
	int value;
};

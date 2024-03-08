#pragma once
#include "Node.h"
#include <iostream>
using namespace std;

class Queue
{
private:
	Node* first;
	Node* last;

public:
	Queue();
	~Queue();

	void push(int data);
	bool pop();
	bool peek(int &data);
	void display(ostream& os);

	friend ostream& operator<<(ostream& os, Queue& right);
};


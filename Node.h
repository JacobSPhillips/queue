#pragma once
class Node
{
public:
	int data;
	Node* next;

	Node()
	{
		data = 0;
		next = nullptr;
	}
	Node(int data)
	{
		this->data = data;
		this->next = nullptr;
	}

};


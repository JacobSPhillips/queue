#include "Queue.h"

// initializes the queue
Queue::Queue()
{
	first = nullptr;
	last = nullptr;
}

// deletes the queue
Queue::~Queue()
{
	// set temporary node to the first in the stack
	Node* tmp = first;
	while (tmp != nullptr) // loop until there is nothing left
	{
		first = first->next; // move the first to the next node

		delete tmp; // delete the node that was the first

		tmp = first; // set temp to the new first node
	}
	last = nullptr; // set the last to nullptr
}

ostream& operator<<(ostream& os, Queue& right)
{
	right.display(os); // call the display method for the linkedList

	return os; // return the updated ostream 
}

// this will print the items in the stack
void Queue::display(ostream& os)
{
	Node* tmp = first; // set the node to the head

	while (tmp != nullptr)
	{
		os << tmp->data << " "; // output the data stored in the current node and end the line

		tmp = tmp->next;
	}
	os << endl;
}

// this adds the the end of the queue
void Queue::push(int data)
{
	// create a temporary node that holds the data
	Node* tmp = new Node(data);

	// if the list is empty
	if (first == nullptr)
	{
		first = tmp; // set the first node equal to the data
	}
	else // when the list isn't empty
	{
		last->next = tmp; // points the last to the new node
	}
	last = tmp; // reassigns the last node to the data that was just added
}

// this deletes the first node
bool Queue::pop()
{
	Node* tmp = first; // assigns a temp node to the first

	if (first == nullptr) return false; // checks if queue is empty

	first = first->next; // reassigns the first node to the next

	if (first == nullptr) last = nullptr; // if there is only one node in the queue it assigns the last node to null

	delete tmp; // deletes the first temp

	return true;
}

// returns the data of the first node
bool Queue::peek(int &data)
{
	if (first == nullptr) return false; // checks if list is empty

	data = first->data;

	return true;
}



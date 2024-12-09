#pragma once
#include "Data.h"
class Node
{
private:
	Node* nextPtr;
	Data* data;

public:
	Node();
	Node(Data* ptr);
	Node* getNextPtr();
	void setNextPtr(Node* ptr);

	Data* getData();
	void insertData(Data* ptr);


};


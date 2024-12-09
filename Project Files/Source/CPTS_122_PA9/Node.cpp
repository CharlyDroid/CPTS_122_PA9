#include "Node.h"


Node::Node() {
	nextPtr = nullptr;
	data = nullptr;
}

Node::Node(Data* ptr) {
	nextPtr = nullptr;
	data = ptr;
}

Node* Node::getNextPtr() {
	return nextPtr;
}

void Node::setNextPtr(Node* ptr) {
	nextPtr = ptr;
}

Data* Node::getData() {
	return data;
}

void Node::insertData(Data* ptr) {
	data = ptr;
}

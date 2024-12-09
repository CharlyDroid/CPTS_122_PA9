#include "Test.h"

//if List is not loaded, one check is that list should be empty
bool Test::listIsNullTest() {
	List test;
	return (test.getHead() == nullptr);
}

//Ensure max value found is correct value according to explicit data.
bool Test::maxTest() {
	List test;
	int max = 110;
	return (test.getMaxTime() == max);
}

//if List is loaded, one check is that list should not be empty
bool Test::loadListTest() {
	List test;
	test.LoadList();
	return !(test.getHead() == nullptr);
}

//If node is removed, the size of list should decrease by one...
bool Test::removeTest() {
	Data* temp;
	List test;
	test.insert(temp);
	test.remove();
	return (test.getHead() == nullptr);
}

//if node is added, the size of list should increase by one
bool Test::insertTest() {
	Data* temp;
	List test;
	test.insert(temp);
	return !(test.getHead() == nullptr);
}
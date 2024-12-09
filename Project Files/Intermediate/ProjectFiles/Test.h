#pragma once
#include <iostream>
#include <List.h>

using std::cout;
using std::string;
using std::cin;
using std::endl;
using std::fstream;
using std::ifstream;
using std::ofstream;
using std::istream;
using std::ostream;


/*
 * This test class contains 5 test cases that revolve around the Linked List
 */
 * 
class Test
{
public:

	bool listIsNull = false;
	bool maxValue = false;
	bool loadListValue = false; // should be true
	bool removeValue = false; // size should be one less
	bool insertValue = false; // size should one more

	bool listIsNullTest();
	bool maxTest();
	bool loadListTest();
	bool removeTest();
	bool insertTest();

	void Run(){
		listIsNull = listIsNullTest();
		maxValue = maxTest();
		loadListValue = loadListTest();
		removeValue = removeTest();
		insertValue = insertTest();


		if (listIsNULL == true) {
			cout << "Upon initializing, the head is set to nullptr. <TEST PASSED>" << endl;
		}
		else {
			cout << "ListIsNull test FAILED" << endl;
		}
		if (maxValue == true) {
			cout << "Max Value found. <TEST PASSED>" << endl;
		}
		else {
			cout << "maxValue test FAILED" << endl;
		}

		if (loadListValue == true) {
			cout << "List loaded properly. <TEST PASSED>" << endl;
		}
		else {
			cout << "ListLoad test FAILED" << endl;
		}

		if (removeValue == true) {
			cout << "List removed item. <TEST PASSED>" << endl;
		}
		else {
			cout << "List removal test FAILED" << endl;
		}
		if (insertValue == true) {
			cout << "List inserted item. <TEST PASSED>" << endl;
		}
		else {
			cout << "List insertion test FAILED" << endl;
		}
	};
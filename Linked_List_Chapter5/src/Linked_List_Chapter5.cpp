//============================================================================
// Name        : Linked_List_Chapter5.cpp
// Author      : Harman Toor
// Version     :
// Copyright   : I tried my best hopefully it works
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include<string>
#include"Customer.hpp"
#include"LinkedList.hpp"
using namespace std;

int main() {

	LinkedList *myList = new LinkedList();
	//int CustIDSearch =40;
	cout << "Size" << myList->size() <<endl;
	myList->print_list();

	Customer* theCust = nullptr;
	for (int i=0; i< 100;i+=10)
	{
		theCust= new Customer();
		theCust->setID(i);
		myList->push_back(theCust);
	}
	cout << "Size" << myList->size() <<endl;
	myList->delete_list();

	cout << "Program ending, have a good day" << endl; // prints Program ending, have a good day
	return 0;
}

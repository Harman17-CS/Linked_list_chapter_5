/*
 * LinkedList.hpp
 *
 *  Created on: Sep 26, 2020
 *      Author: harma
 */
#include<iostream>
#include "Customer.hpp"

#ifndef LINKEDLIST_HPP_
#define LINKEDLIST_HPP_

class LinkedList {
public:
	LinkedList();
	void push_back(Customer*);//Customer*
	void push_front(Customer*);//Customer*
	int size(void);
	void delete_list(void);
	void print_list(void);
	Customer* pop_front(void);//customer*
	Customer* pop_back(void);//customer*
	Customer* find (int ID);//customer*
	bool exists(int ID);
	bool deleteIt(int ID);
	virtual ~LinkedList();

	struct node
	{
		Customer* data;
		node* next;
	};

private:
	node* head;
};

#endif /* LINKEDLIST_HPP_ */

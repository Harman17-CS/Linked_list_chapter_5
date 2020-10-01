/*
 * LinkedList.cpp
 *
 *  Created on: Sep 26, 2020
 *      Author: harma
 */
#include<iostream>
#include "LinkedList.hpp"

using namespace std;
LinkedList::LinkedList() {
	// TODO Auto-generated constructor stub
	head = nullptr;



}
void LinkedList::push_back(Customer* c)
{
	node *temp;
	temp = new node;
	temp->data=c;
	temp->next=nullptr;
	node *current = head;
	if (current==nullptr)
	{
		head=temp;
	}
	else
	{
		while(current->next!=nullptr)
		{
			current = current->next;
		}
		current->next=temp;
	}
	return;
}
void LinkedList::push_front(Customer* c)
{
	node* temp;
	temp = new node;
	temp->data=c;
	temp->next = nullptr;
	if(head==nullptr)
	{
		head = temp;
	}
	else
	{
		temp->next=head;
		head=temp;
	}
}
int LinkedList::size(void)
{
	int count =0;
	node *current=head;
	while (current!=nullptr && current->next!=nullptr)
	{
		current=current->next;
		count++;
	}
	return count;
}
void LinkedList::delete_list(void)
{
	node *temp;
	while (head!=nullptr)
	{
		temp=head;
		head=head->next;
		delete temp->data;
		delete temp;
	}

}
void LinkedList::print_list(void)
{
	node* current=head;
	while (current!=nullptr)
	{
		cout << current->data->getID()<<endl;
		current=current->next;


	}
	if (head==nullptr)
	{
		cout << "List is empty" << endl;
	}
	return;
}
Customer* LinkedList::pop_front()
{
	if(head!=nullptr)
	{
		node* temp;
		Customer* c= temp->data;
		head=head->next;
		delete temp;
		return c;
	}
	else
	{
		return nullptr;
	}
}
Customer* LinkedList::pop_back()
{

	return 0;
}
Customer* LinkedList::find(int ID)
{
	node* current;
	current=head;
	while (current!=nullptr)
	{
		if (current->data->getID()== ID)
		{
			Customer* c= current->data;
			return c;
		}
		else
		{
			current=current->next;
		}
	}
	return nullptr;
}
bool LinkedList::exists(int ID)
{
	node *current=head;

	while (current!=nullptr)
	{
		if (current->data->getID()== ID)
		{
			return true;
		}
		current= current->next;
	}
	return false;
}
bool LinkedList::deleteIt(int ID)
{
	node* current;
	current = head;
	if (current==nullptr)
	{
		cout << "Can not delete from an empty list" << endl;
	}
	else
	{
		current=head;
	}
	while (current!= nullptr)
	{
		if (current->data->getID()==ID)
		{
			delete current->data;
			return true;
		}
		current=current->next;
	}
	return false;
}
LinkedList::~LinkedList() {
	// TODO Auto-generated destructor stub
}


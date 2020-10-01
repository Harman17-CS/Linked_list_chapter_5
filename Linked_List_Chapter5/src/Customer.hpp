/*
 * Customer.hpp
 *
 *  Created on: Sep 26, 2020
 *      Author: harma
 */

#include<iostream>

using namespace std;
#ifndef CUSTOMER_HPP_
#define CUSTOMER_HPP_

class Customer {
public:
	Customer();//Constructor
	//``````````````````````````````````````````````````````````````````````````````````
	bool setID(int Id);//Try to change to BOOL for input validation if needed
	bool setName(string name);//Try to change to BOOL for input validation if needed
	bool setAddress(string address);//Try to change to BOOL for input validation if needed
	bool setCity(string city);//Try to change to BOOL for input validation if needed
	bool setState(string state);//Try to change to BOOL for input validation if needed
	bool setZipCode(int zipcode);//Try to change to BOOL for input validation if needed
	void setAccountBalance(int balance);
	//```````````````````````````````````````````````````````````````````````````````````
	int getID();//Try to change to BOOL for input validation if needed
	string getName();//Try to change to BOOL for input validation if needed
	string getAddress();//Try to change to BOOL for input validation if needed
	string getCity();//Try to change to BOOL for input validation if needed
	string getState();//Try to change to BOOL for input validation if needed
	int getZipCode();//Try to change to BOOL for input validation if needed
	float getAccountBalance();
	//````````````````````````````````````````````````````````````````````````````````````
	virtual ~Customer();//Destructor (virtual just makes sure it gets destructed no matter what I think)

private:
	int ID;
	string Name;
	string Address;
	string City;
	string State;
	int ZipCode;
	float AccountBalance;
};

#endif /* CUSTOMER_HPP_ */

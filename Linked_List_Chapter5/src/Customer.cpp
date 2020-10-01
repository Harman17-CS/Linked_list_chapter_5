/*
 * Customer.cpp
 *
 *  Created on: Sep 26, 2020
 *      Author: harma
 */

#include "Customer.hpp"
#include<iomanip>
#include<iostream>

using namespace std;
Customer::Customer()
{
	// TODO Auto-generated constructor stub
//`````````````````````````````````````````
	ID=0;
	Name="";
	Address="";
	City="";
	State="";
	ZipCode=0;
	AccountBalance=0;
}
bool Customer::setID(int Id)
{
	while ((Id <1)|| (Id>999999))
	{
		//ID=-1;
		cerr << "Not within Bounds" << endl;

		cout << "Enter Valid ID";
		cin >> Id;
		return 0;

	}
		ID=Id;
		return true;

}
bool Customer::setName(string name)
{
	while (name.empty())
	{
		cerr << "Invalid entry." << endl;
		return false;
	}

		Name=name;
		return true;

}
bool Customer::setAddress(string address)
{
	while(address.empty())
	{
		cerr << "Invalid entry." << endl;
		return false;
	}

		Address=address;
		return true;

}
bool Customer::setCity(string city)
{
	while(city.empty())
	{
		cerr << "Invalid entry." << endl;

		cin.ignore();
		getline(cin,city);
		return false;
	}

		City=city;
		return true;

}
bool Customer::setState(string state)
{
	while(state.empty())
	{
		cerr << "Invalid entry." << endl;
		return false;
		getline(cin, state);

	}

		State=state;
		return true;

}
bool Customer::setZipCode(int zipcode)
{
	while (zipcode<10000||zipcode>99999)
	{
		cerr << "Invalid entry." << endl;
		return false;
		cin >> zipcode;
	}
		ZipCode=zipcode;
		return true;

}
void Customer::setAccountBalance(int balance)
{
	AccountBalance=balance;
}
int Customer::getID()
{
	return ID;
}
string Customer::getName()
{
	return Name;
}
string Customer::getAddress()
{
	return Address;
}
string Customer::getCity()
{
	return City;
}
string Customer::getState()
{
	return State;
}
int Customer::getZipCode()
{
	return ZipCode;
}
float Customer::getAccountBalance()
{
	return AccountBalance;
}
Customer::~Customer() {
	// TODO Auto-generated destructor stub
}


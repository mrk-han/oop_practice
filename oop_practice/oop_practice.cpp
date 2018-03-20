// oop_practice.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

const int NUM = 5;


class Employee 
{

private:
	char firstName[50];
	char lastName[50];
	int type;
	double compensation;

public:
	Employee();
	void getEmployee();
	void printEmployee();
	~Employee();

};


Employee::Employee()
{
	cout << "im in constructor" << endl;
	strcpy_s(firstName, "");
	strcpy_s(lastName, "");
	compensation = 0;
	type = 1;
}

void Employee::getEmployee()
{
	cout << "first name??" << endl;
	cin.getline(firstName, 50);
	cout << "last name??" << endl;
	cin.getline(lastName, 50);

	cin.clear();


	cout << "compensation ?? " << endl;
	cin >> compensation;
	cout << "type? 1=exempt, 2=nonexempt" << endl;
	cin >> type;

	cin.clear();
}

void Employee::printEmployee()
{
	cout << "FN: " << firstName << endl;
	cout << "LN: " << lastName << endl;
	cout << "compensation " << compensation << endl;
	cout << "Type: " << type << endl;
}

Employee::~Employee()
{
	cout << "in destructor " << endl;
}

int main()
{
	Employee myEmp[NUM];

	for (int i = 0; i < NUM; i++)
	{
		myEmp[i].getEmployee();
	}

	for (int i = 0; i < NUM; i++)
	{
		myEmp[i].printEmployee();
	}


	return 0;
}
// oop_practice.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

const int NUM = 5;

class Car
{
private:
	char make[25];
	char model[25];
	char color[25];
	double price;
	int nWheels;
	bool isEcoFriendly;

public:
	Car();
	~Car();
	void createCar();
	void printCar();
	void makeCarGo();
	Car(int wheels);
};

Car::Car(int wheels)
{
	cout << "new car created!" << '\n';
	strcpy_s(make, "uninitialized");
	strcpy_s(model, "uninitialized");
	strcpy_s(color, "uninitialized");
	nWheels = wheels;
	price = 0;
	isEcoFriendly = false;
}

Car::Car()
{
	cout << "new car created!" << '\n';
	strcpy_s(make, "uninitialized");
	strcpy_s(model, "uninitialized");
	strcpy_s(color, "uninitialized");
	nWheels = 0;
	price = 0;
	isEcoFriendly = false;
}

void Car::createCar()
{

}

void Car::makeCarGo()
{
	cout << "Car is going!" << endl;
}

void Car::printCar()
{
	cout << "Make: " << make << endl;
	cout << "Model: " << model << endl;
	cout << "Color: " << color << endl;
	cout << "It has " << nWheels << " wheels!" << endl;
	cout << "It costs: " << price << endl;
	if (isEcoFriendly)
	{
		cout << "It is eco friendly!!!" << endl;
	}
}

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

Car::~Car()
{

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

	Car myNewCar(4);
	Car myNewCar2;


	return 0;
}
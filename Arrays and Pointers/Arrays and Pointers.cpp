// Arrays and Pointers.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;


int main()
{
	const int SIZE = 5;
	unsigned int values[5]{1,3,5,7,9};
	unsigned int *vptr;

	for (int i = 0; i < 5; i++)
		cout << values[i] << endl;

	vptr = values;
	vptr = &values[0];

	for (int i = 0; i < 5; i++)
	{
		cout << "Value at i = " << i << " is: " << *vptr << endl;
		vptr++;
	}

	vptr += 3;

	cout << "vptr + 3 address: " << vptr << endl << "vptr + 3 value: " << *vptr << endl;

}


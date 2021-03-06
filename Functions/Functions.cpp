// Functions.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main()
{
	double grades[5]{ 89.6, 96.2, 76.4, 85.7, 90.9 };
	string names[5]{ "Greg", "Tom", "Jeff", "Larry", "Susan"};
	int numGrades = sizeof(grades)/sizeof(grades[1]);

	double adjustGrades(double grade, string name);
	double adjustGrades(double grades[], string name[], int size);

	cout << "Scalar Results:" << endl;
	for (int i = 0; i < 5; i++)
		adjustGrades(grades[i], names[i]);

	cout << "Array Results:" << endl;
	adjustGrades(grades, names, numGrades);
}



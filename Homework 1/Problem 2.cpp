// Problem 2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream"

using namespace std;

static int GetSum(int start, int end, int step)
{
	int sum = 0;
	for (int i = start; i <= end; i += step)
	{
		sum += i;
	}

	return sum;
}

int main()
{
	int start, end, step;
	cout << "Start: ";
	cin >> start;
	cout << "End: ";
	cin >> end;
	cout << "Step: ";
	cin >> step;

	cout << "Sum is "<< GetSum(start, end, step) << endl;

    return 0;
}


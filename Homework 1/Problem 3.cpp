// Problem 3.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream"
using namespace std;

int main()
{
	int x, n, counter;
	cout << "Enter x: ";
	cin >> x;
	cout << "Enter n: ";
	cin >> n;

	counter = 1;

	while (n != 0)
	{
		if (x % 7 == 0 || x % 9 == 0)
		{
			cout << counter << ". " << x << endl;
			n--;
			counter++;
		}
		x++;
	}

    return 0;
}


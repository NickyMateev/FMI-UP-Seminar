// Problem 1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream"
using namespace std;



int main()
{
	double x, y;
	cout << "x = ";
	cin >> x;
	cout << "y = ";
	cin >> y;

	double center_x = -1;
	double center_y = 0;
	double circle_radius = 1;

	bool isInside = false;

	// checks
	if ((x >= 0 && x <= 2) && (y >= -1 && y<= 0.5))		// first case (I and IV quadrant)
	{
		isInside = true;
	}
	else if ((x >= 0 && x <= 1) && (y >= 0.5 && y <= 1))	// second case (I quadrant)
	{
		isInside = true;
	}
	else if ((x >= -1 && x <= 0) && (y >= -1 && y <= 1))	// third case (II and III quadrant)
	{
		if ((x - center_x)*(x - center_x) + (y - center_y)*(y - center_y) <= circle_radius*circle_radius) // is it is inside the circle?
		{
			isInside = false;
		}
		else
		{
			isInside = true;
		}
	}
	else // any other case would be out of bounds
	{
		isInside = false;
	}

	// bonus checks
	if ((x == 0 && y == 0) || (x == -1 && y == -1) || (x == -1 && y == 1))	// the "edges" of the cyrcle
	{
		isInside = false;
	}

	// print the result
	if (isInside)
	{
		cout << 1 << endl;
	}
	else
	{
		cout << 0 << endl;
	}

    return 0;
}


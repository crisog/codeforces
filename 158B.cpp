// Codeforces - Taxi 158B.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	int a1 = 0, a2 = 0, a3 = 0, a4 = 0;
	int x = 0, y = 0, taxi = 0;

	cin >> x;

	for (int i = 0; i < x; i++)
	{
		cin >> y;
		if (y == 1) {
			a1++;
		}
		else if (y == 2) {
			a2++;
		}
		else if (y == 3) {
			a3++;
		}
		else if (y == 4) {
			a4++;
		}
	}

	// group of 4
	if (a4 > 0) {
		taxi = taxi + a4;
		a4 = 0;
	}

	// group of 3

	while (a3 > 0) {
		if (a1 == 0) {
			taxi++;
			a3--;
		}
		else {
			while (a1 > 0 && a3 != 0) {
				taxi++;
				a1--;
				a3--;
			}
		}
	}


	// group of 2
	while (a2 > 1) {
		int r = 0;
		r = floor(a2 / 2);
		a2 = a2 - (r * 2);
		taxi = taxi + r;
	}

	if (a2 == 1 && a1 > 1) {
		a1 = a1 - 2;
		taxi++;
	}
	else if (a2 == 1 && a1 == 0) {
		taxi++;
		a2--;
	}
	else if (a2 == 1 && a1 == 1) {
		taxi++;
		a2--;
		a1--;
	}

	//group of 1
	while (a1 > 0) {
		if (a1 >= 4) {
			a1 = a1 - 4;
			taxi++;
		}
		else if (a1 != 0) {
			taxi++;
			a1 = 0;
		}
	}
	cout << taxi;
}



/*if (a2 > 1 && a2 % 2 == 0) {
	int r = 0;
	r = floor(a2 / 2);
	a2 = a2 - r;
}
else {
	int o = 0;
	o = floor(a2 / 2);
	a2 = a2 - o;
}*/
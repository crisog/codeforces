// Codeforces- Equations of Mathematical Magic 1064B.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <bitset>
#include <math.h>

using namespace std;

	int main()
	{
		int index = 0, input = 0, sol = 0;
		string x;
		
		cin >> index;

		for (int i = 0; i < index; i++)
		{
			int c = 0;
			cin >> input;
			x = bitset<32>(input).to_string();
			for (int j = 0; j < x.size(); j++)
			{ 
				if (x[j] == '1') {
					c++;
				}
			}
			sol = pow(2,c);
			cout << sol << endl;
			//cout << x << endl;
		}
	}

	/*int index = 0, a = 0;
		cin >> index;
		for (int i = 0; i < index; i++)
		{
			int c = 0;
			for (int j = 0; j < index; j++)
			{
				if (i - (j ^ i) - j == 0) {
					c++;
				}
			}
			//cout << i << " " << c << endl;
			cout << i << " " << c << endl;
		}*/
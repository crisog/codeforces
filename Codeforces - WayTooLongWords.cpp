// Codeforces - WayTooLongWords.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <math.h>
#include <vector>
#include <string>

using namespace std;

int main() {

	string a, d;
	vector<string> b;
	int c;
	cin >> c;
	for (int i = 0; i < c; ++i) {
		cin >> a;
		if (a.size() > 10) {
			d = a[0] + to_string(a.size() - 2) + a[a.size() - 1];
			b.push_back(d);
		}
		else {
			b.push_back(a);
		}
	}

	for (int i = 0; i < c; ++i) {
		cout << b[i] << endl;
	}

}


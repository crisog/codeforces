// Codeforces - Caps Lock 131A.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <string>

using namespace std;

int main() {

	string w;
	int lower = 0, firstlow = 0;
	cin >> w;
	for (int i = 0; i < w.size(); i++) {
		if (i == 0) {
			if (islower(w[0]) != 0)
				firstlow++;
		}
		else {
			if (islower(w[i]) != 0)
				lower++;
		}
	}
	if (lower == 0 && firstlow == 1) {
		
		for (int i = 0; i < w.size(); i++) {
			w[i] = tolower(w[i]);
		}

		w[0] = toupper(w[0]);
		cout << w;
	}

	else if (lower == 0 && firstlow == 0) {
		for (int i = 0; i < w.size(); i++) {
			w[i] = tolower(w[i]);
		}
		cout << w;
	}

	else {
		cout << w;
	}


}
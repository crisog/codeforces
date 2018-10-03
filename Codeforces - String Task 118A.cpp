// Codeforces - String Task 118A.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <string>

using namespace std;

bool is_vowel(char c) {
	switch (c) {
	case 'a':
	case 'e':
	case 'i':
	case 'o':
	case 'u':
	case 'y':
		return true;
	default:
		return false;
	}
}

int main() {
	
	string word, word2;
	cin >> word;

	for (int i = 0; i < word.size(); i++)
	{
		word[i] = tolower(word[i]);
	}

	for (int i = 0; i < word.size(); i++)
	{
		if (is_vowel(word[i]) != true) {
			word2 += '.';
			word2 += word[i];
		}
		else {
			continue;
		}
		
	}

	cout << word2;

}



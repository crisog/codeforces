#include "pch.h"


#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	double n, m, a;
	long long r;
	cin >> n >> m >> a;
	r = (ceil(n / a)) * (ceil(m/a));
	cout << r;
}
//============================================================================
// Name        : HE-Dalton.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {

	int count = 0;
	cin >> count;

	while (count--) {
		int i;
		cin >> i;
		if (i % 2 == 0)
			cout << i / 2 << " " << i / 2 << endl;
		else
			cout << i / 2 + 1 << " " << i / 2 << endl;
	}
}

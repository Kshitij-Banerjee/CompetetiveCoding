//============================================================================
// Name        : Leet-Pow.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iosfwd>
#include <iostream>
using namespace std;

class Solution {
public:
    double myPow(double x, int n) {
        if( n == 0) return 1;
        if( x == 0) return 0;
        if( n > 0 ){
        	return  (long double)x * myPow(x, n-1);
        }
        else {
            return (1/(long double)x) * myPow(x, n+1);
        }
    }
};

int main() {
	Solution s;
	cout << s.myPow(1.00001, 123456) << endl; // prints !!!Hello World!!!
	return 0;
}

#include <iostream>
using namespace std;

// if we use void then function return no value 

int Sum(int x, int y);

int main () {
	
	int z = Sum(4,6); // we can also store retturn value in veriable
	
	cout << Sum(6,8);
	return 0;
	}

	int Sum(int x, int y) {
		
		return x+y; // for returning any values we need to use return keyword
		}

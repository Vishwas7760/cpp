#include <iostream>
using namespace std;
int sum(int k) {
	if (k>0) {
		return k+sum(k-1);
		}
	else {
		return 0;
		}
	
	}


int main() {
	
	cout << "enter the number - ";
	
	
	int k;
	cin >> k;
	
	
	cout << "the sum off 1 to " << k << " numbers is - ";
	cout << sum(k);
	
	
	
	return 0;
	}

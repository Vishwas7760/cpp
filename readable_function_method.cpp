#include <iostream>
using namespace std;

// best way to write readable function is first declare a function before main() function. then write definition of function after main function.

void MyFunction(); //here we declared function

int main() {
	
	MyFunction(); //no error occurs
	
	// this tips make our code readable
	// this will make our code better organized and easy to read
	
	return 0;
	} 
	
	void MyFunction() {
		cout << "executed" << endl;
		}

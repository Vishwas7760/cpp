#include <iostream>
using namespace std;
// function makes code reusable

// void means this function do not return any value
void myfunction() { // declaration
	
	cout << "function code is executed"<<endl; // definition: code to be executed
	
	}
// If a user-defined function, such as myFunction() is declared after the main() function, an error will occur:

int main () {
	
	
	// lets call this function
	myfunction();
	
	//we can call function multiple times therefore this is usefull
	myfunction();
	myfunction();
	myfunction();
	
	
	
	return 0;
	}

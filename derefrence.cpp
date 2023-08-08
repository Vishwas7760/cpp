#include <iostream>
using namespace std;
int main() {
	
	string dream = "engineer"; //declare a variable
	
	string* goal = &dream; //declare pointer
	
	
	//reference = output the memory address of dream with the poiters (0x9bab0b28)
	cout << goal << endl;
	
	
	//dereference = output  the value of the dream with the pointer (engineer)
	
	cout << *goal << endl;
	
	/*
	
	* When this used in declaration (string* ptr), it creates a pointer variable.
When not used in declaration, it act as a dereference operator.
	
	*/
	
	
	
	
	return 0;
	}

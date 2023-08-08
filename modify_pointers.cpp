#include <iostream>
using namespace std;
int main() {
	
	string dream = "engineer";
	string* goal = &dream;
	
	//output the value of dream (engineer)
	cout << dream << endl;
	
	//output the memory address of dream with the pointer variable (0x97e60b28)
	cout << goal << endl;
	
	//access the memory address of dream and print its value (engineer)
	cout << *goal << endl;
	
	//modify the value of dream with the pointer variable
	*goal = "coder"; //here we first access the memory adress of dream veriabe and then we change it;
	
	//output the new value of pointer variable (coder)
	cout << *goal << endl;
	
	//output the new value of dream veriable (coder)
	cout << dream << endl;
	
	
	
	
	
	return 0;
	}

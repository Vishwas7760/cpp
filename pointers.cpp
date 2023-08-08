#include <iostream>
using namespace std;
int main() {
	
	//pointers is a veriabel that store the memory address as its value
	
	
	string food = "omlete";
	string* mood = &food; //here we store memory address of food in mood variable
	
	cout << mood;
	
	/* there are 3 ways to declare pointers
	1. string*  mood //prefered 
	2. string * mood
	3. string *mood
	
	*/
	
	
	
	return 0;
	}

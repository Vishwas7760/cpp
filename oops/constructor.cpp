#include <iostream>
using namespace std;


// constructor - a constructor is special method  in c++ that is  automatically called when we create object.
// to create constructor use the same name as the class followed by parentheses ()
class myclass
{
public:
	
	myclass() {
		
		cout << "this is a constructor";
		}
	
};

int main() {
	
	// lets create the object
	myclass one; // here we created the objext and also called constructor method automaticaly
	
	
	
	// note - constructor always have same name, they always have public: , and it does not have any return value
	
	
	
	
	return 0;
	}

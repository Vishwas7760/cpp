#include <iostream>
using namespace std;

void myname(string name);// in (parameters)



int main() {
	
	//lets call the function 
	myname("vishwas");
	myname("gattu");
	myname("vishal");
	// when the parameters are passed to the function, it is called argument.
	// here name is parameter and vishwas, gattu, vishal is argument.
	return 0;
	}

void myname(string name) {

	cout << name << endl;
	}

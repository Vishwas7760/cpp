#include <iostream>
using namespace std;

/*
ex.  class   object
	 fruite		apple, banana, mango
	 car		tata, mahindra, toyota
*/
class myclass { // the class

	public: // if we use public: Keyword then we can access classes from outside the class
	string name; // attribute (string veriable)
	int age; // attribute (int veriable)
	
	
	};


int main() {
	
	
	myclass vishwas, dinesh, ganesh; // we can create multiple object of myclass
	
	// access attribute and set values
	vishwas.name = "vishwas babar ";
	vishwas.age = 18;
	 
	dinesh.name = "dinesh arekar ";
	dinesh.age = 18;
	
	ganesh.name = "ganesh bhapkar ";
	ganesh.age = 21;
	
	
	
	// print attribute values
	cout << "my name " << vishwas.name << "and age " << vishwas.age << endl << endl << endl;
	
	
	cout << dinesh.name << dinesh.age << endl << endl;
	cout << ganesh.name << ganesh.age;
	
	
	return 0;
	}

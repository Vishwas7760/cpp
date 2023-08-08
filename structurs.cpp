#include <iostream>

using namespace std;
int main () {
	
	
	// for this structure we can use struct keyword
	struct {             // Structure declaration
		int myNum;         // Member (int variable)
		string myString;   // Member (string variable)
	} myStructure, myStructure1, myStructure2;       // Structure variable
	
	
	myStructure.myNum = 1;
	myStructure.myString = "vishwas";
	cout << myStructure.myNum << " and " << myStructure.myString << endl <<endl<<endl;
	
	
	
	myStructure1.myNum = 24;
	myStructure1.myString = "babar";
	cout << myStructure1.myNum << " and " << myStructure1.myString << endl << endl <<endl;
	
	return 0;
	}

#include <iostream>
#include <string>
using namespace std;
int main() {
	
	string MyName = "vishwas";
	//lets find firts character of MyName 
	cout << "first character: " << MyName[0] << endl; // in cpp counting start from 0 not 1
	
	
	//lets find 4th character of MyName
	cout << "4th character: " << MyName[3] << endl;
	
	
	
	cout << "before: " << MyName << endl;
	//lets change string character
	MyName[0] = 'b'; // here we replace v from b
	cout << "after: "<< MyName << endl;
	
	
	
	
	
	return 0;
	}

#include <iostream>
using namespace std;

int main() {
	
	string name[4] = {"vishwas","gattu","vishal","ganesh"}; // here we create a array of string data type
	
	name[1] = "dinesh"; //here we changed name gattu to dinesh
	//cout << name[1] << endl; // output = dinesh
	
	//lets print arrays element with the help of loop
	
	for(int i=0;i<4;i++)
	{
		cout << name[i] << endl;
	}	
	
	
	//then lets find the size of arrays
	cout << endl << endl << sizeof(name) << endl; //string size is 12 byte therefore output is 48 byte
	
	int get_lenghtofarray = sizeof(name)/sizeof(string);
	cout << get_lenghtofarray ; //output is 4
	
	
	
	
	
	
	return 0;
	}

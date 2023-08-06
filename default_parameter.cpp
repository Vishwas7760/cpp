#include <iostream>
using namespace std;

//when we call function without argument then this default parameter passed in definition
// for seting default parameter we can use = oprator
void MYNAME(string name="dada") { // here default parameter is "dada".

	cout << name << endl;
	}
	
	int main() {
		
		
		MYNAME("vishal"); //when we pass argument then this argument value printed successfuly
		MYNAME(); // when we pass nothing then default value printed
		
		// a parameter with a default value known as a optional parameter. from above example name is a optional parameter. dada is a default value
		
		return 0;
		}

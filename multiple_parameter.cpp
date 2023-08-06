#include <iostream>
using namespace std;

// we can also use multiple parameter

void myfunction(string name, int age, string favfood );

int main() {

	myfunction("gattu",18,"dosa");
	return 0;
	}

	
	void myfunction(string name, int age, string favfood) {
	
		cout << name << " is " << age << " year old and his faverate food is " << favfood << endl; 
		
		}

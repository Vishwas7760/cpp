#include <iostream>
using namespace std;
// function overloading means we can create function with similar name by diffrent parameter

// instead of making diffrent name function for diffrent task we can create same name function with diffrent parameter for diffrent task

int AddSum(int num1,int num2) {
	return num1+num2;
	}

double AddSum(double num1, double num2) {
	return num1+num2;
	}

	
int main() {
	
	// for int sum we can use Addsum() function with int argument
	cout << AddSum(3,5) << endl;
	
	
	// for double sum we can use AddSum() function with double argument
	cout << AddSum(5.5,5.0) << endl;
	
	
	
	//cout << AddSum(4.6,5); // if we enter value like this error occurs we need to pass value like function parameter datatypes 
	
	}

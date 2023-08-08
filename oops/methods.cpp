#include <iostream>
using namespace std;

class myclass {
	
	// methods are function that belong to the class
	// we can create function with two type
	// insite class difinition
	// outside class difinition
	public:
	
	void insiteclass() { // 
		
		cout <<"insite function output" << endl ;
		}
	
	
	int outsideclass(int x); // method/function declaration for outside creation
	
	};
	
int myclass::outsideclass(int x) { // remember this syntax bro
		
		
		if(x>0)
		{
			int sum = x+outsideclass(x-1);
		}
		
		else if(x==0)
		{
			cout << sum;
		}
	
	}

int main() {

	// lets call the function
	// for accecing the function we create object and acces it with . syntax
	
	myclass test;
	
	test.insiteclass();
	
	int x;
	cin>>x;
	test.outsideclass(x);
	
	}

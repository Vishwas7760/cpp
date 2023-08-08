#include <iostream>
using namespace std;
int main ()
{
	
	//what is pointer ----> data types which holds the address of other data types 
	// & ---> (address of) operator 
	int a=4;
	int* b=&a;
	cout<<"the addres of a "<<b<<endl;
	cout <<"the addres of a "<<&a<<endl;
	
	
	// * --->(value at) derefrence operator
	
	cout<<"the value at address b is  "<<*b<<endl;
	
	
	cout<<endl<<endl;
	cout<<"pointer to pointer "<<endl;
	int** c = &b;
	cout<<" the address of b is "<<&b<<endl;
	cout<<" the address of b is "<<c<<endl;
	cout<<" the value at address c is "<<*c<<endl;
	cout<<" the value at address vlaue at (value at (c)) is "<<**c<<endl;
	
	return 0;
	
}

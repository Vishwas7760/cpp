#include <iostream>
#include <iomanip>

using namespace std;

int main ()
{
	/*int a = 4;
	cout<<"the value of a is "<<a<<endl; 
	a = 6;
	cout<<"the value of a is "<<a<<endl; 
	cout <<endl<<endl;
	
	//const se koi bhi value change nahi hoti 
	const int b = 10;
	cout<<"the value of b is "<<b<<endl; */
	
	
	//     manipulators
	
	int x=3,y=344,z=2345;
	
	cout<<"value of x without setw " <<x<<endl;
	cout <<"value of y without setw "<<y<<endl;
	cout<<"value of z without setw " <<z<<endl;
	cout <<endl<<endl;
	
	cout <<"       with setw "<<endl;
	cout <<"value of x "<<setw(4)<<x <<endl;
	cout<<"value of y "<<setw(4)<<y<<endl;
	cout<<"value of z "<<setw(4)<<z<<endl<<endl; 
	
	//       operators precedence
	
	int a=4,b=6;
	int c=(a*6)+b;
	int d= ((((a*5)+b)-14)+24) ;
	
	cout<<"the value of c "<<c<<endl;
	cout<<"the value of d "<<d<<endl;
	
	
	
	
	
	
	return 0;
}

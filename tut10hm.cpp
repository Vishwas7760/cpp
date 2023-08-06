#include <iostream>

using namespace std;

int main ()
{
	cout<<"for loop:- "<<endl;
	for (int a=6,b=1; (a*b)<=60;b++)
	{
		cout<<a*b<<endl;
		
	}
	cout<<endl<<endl;
	
	cout <<"while loop:- "<<endl;
	int c=6,d=1;
	while ((c*d)<=60)
	{
		cout<<c*d<<endl;
		d++;
		
	}
	cout<<endl<<endl;
	
	cout<<"do-while loop:- "<<endl;
	int x=6,y=1;
	do 
	{
		cout<<x*y<<endl;
		y++;
		
	}while ((x*y)<=60);
	
	
	return 0 ;
}

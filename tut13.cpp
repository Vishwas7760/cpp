#include <iostream>
using namespace std;
int main ()
{
	//example of array 
	
	cout<<"that  is the marks "<<endl;
	int marks[] = {45,5,43,53,45,52,98,86,78,45,70,85,68,94,45,89,35,54,64,48,84,57,64,87,54,87,54,87,64,54,19,54,85};
	cout<<marks[0]<<endl;
	cout<<marks[1]<<endl;
	cout<<marks[2]<<endl;
	cout<<marks[3]<<endl;
	cout<<endl<<endl;
	
	cout<<"that is mathmarks "<<endl;
	int mathmarks[6];
	mathmarks[0]=34;
	mathmarks[1]=36;
	mathmarks[2]=42;
	mathmarks[3]=45;
	mathmarks[4]=49;
	mathmarks[5]=84;
	
	
	cout<<mathmarks[1]<<endl;
	cout<<mathmarks[0]<<endl;
	cout<<mathmarks[3]<<endl;
	cout<<mathmarks[4]<<endl;
	cout<<mathmarks[2]<<endl<<endl<<endl;
	
	cout<<"that is the for loop "<<endl;
	
	
	for ( int i=1 ; i<20; i++)
	{
		
		cout<<"the mark of "<<i<<" is "<<marks[i]<<endl;
		
		
		
	}
	
	cout<<endl<<endl<<"that is while loop method "<<endl;
	int i=0;
	while(i<4)
	{
		cout<<"the marks of "<<i<<" is "<<marks[i]<<endl;
		
		i++; 
	}
	
	
	
	
	
	
	
	
	
	
	
	return 0;
	
}

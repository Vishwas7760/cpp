#include<iostream>

using namespace std;

int main()
{
	/*loop in c++...
	
	there are three types of loop
	1.for loop
	2. while loop
	3. do-while loop 
	
	*/
	
	//for loop 
	//syntax of for :
	// for(initialization; condition; updation)
	cout<<"for loops :-"<<endl;
	for(int i=1; i<=40; i++)
	{
		cout<<i<<" ";
		
	}
	
	/* example of indefinite number
	
	for(int i=1; 5<=40; i++)
	{
		cout<<i<<endl;
		
		
	}   */
	
	/* while loop in c++
	syntax :
	while (condition)
	{   
         cout <<  <<endl;
	   c++ statement;
		
	}  */
	
	//printing number 1 to 40 with while loop 
	cout<<endl<<endl<<"while loop :- "<<endl;
	int a=1;
	while (a<=40)
	{
		cout<<a<<" ";
		a++;
		
	}
	
	/* do while loop in c++
	syntax :
	int b=1;
	do
	{
		statement;
		 cout<<  <<endl;
		
	}while (a<=40);
	 */
	 cout<<endl<<endl<<"do while loop :- "<<endl;
	int b=1 ;
	do 
	{
		
		cout <<b<<" ";
		b++;
		
	}while (b<=40);
	
	
	
	
	
	
	
	
	return 0;
}

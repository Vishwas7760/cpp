#include<iostream>

using namespace std;
int main()
{
	  
	int age;
	cout<<"enter you're age"<<endl;
	cin >>age;
	
	//selection control structure: if else if else ladder
	
	if ((age<18)&&(age>=8))
	{
		cout <<"your not eligible "<<endl;
		
	}
	
	else if (age==18)
	{
		cout<<"your eligible because age is 18"<<endl;
		
	}
	
	else if(age<8)
	{
		cout <<"why you're looking. small guy"<<endl;
		
	}
	else 
	{
		
		cout<<"congrats your eligible"<<endl;
	}  
	
	// selection control structure:
	//  switch case statement
	
	switch (age)
	{
		case (15):
		cout<<"hey kid"<<endl;
		break;
		case (18):
		cout<<"hey hello bro "<<endl;
		break;
		case (70):
		cout<<"hello grandpa" <<endl;
		break;
		default:
		cout<<"not for you"<<endl;
	}  
	
	return 0;
}

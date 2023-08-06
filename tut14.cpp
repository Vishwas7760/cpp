#include <iostream>
using namespace std;


struct eployee
{
	// data
	int eid;
	char favchar;
	float sallery;
	
	
};


union money
{
	// data
	int rice;
	char car;
	float pound;
	
	
	
};

int main ()
{

	struct eployee harry;
	harry.eid = 123456;
	harry.favchar = 'v';
	harry.sallery = 120000;
	
	
	cout<<"the eployee harry eid is "<<harry.eid<<endl;
	cout<<"the eployee harry favchar is "<<harry.favchar<<endl;
	cout<<"the eployee harry sallery is "<<harry.sallery<<endl<<endl<<endl;
	
 
	
	union money m1;
	m1.rice = 2;
	m1.car = 'c';
	m1.pound = 10;
	
	//cout<<"the value of rice "<<m1.rice<<endl;
           cout<<m1.car;
 	
 	
 	enum meal {breakfast, lunch, dinner};
 	cout<<breakfast<<endl;
 	cout<<lunch<<endl;
 	cout<<dinner<<endl<<endl<<endl;
 	
 	meal v1 = lunch;
 	cout<<(v1==2)<<endl;
 	cout<<(v1==1)<<endl;
 	
	return 0;
}	

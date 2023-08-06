#include <iostream>
 using namespace std;


int c=45;
int main ()
{
//************buildin data types*******
	
	/*int a,b,c;
	
	cout <<"enter the value of a: "<<endl;
	cin >>a;
	cout <<"enter the value of b: "<<endl;
	cin >>b;
	c = a+b;
	cout <<"the sum is " <<c<<endl;
	cout <<c<<endl<<endl<<endl;
	
	cout <<::c; // :: that is technic for call above variables
	cout<<endl<<endl<<endl<<endl; */
	
	
//*********************""""""********** float, double, long double Literals **********
	
		
	//agar ham bina suffix ke isko pass karenge to jis type ki uska data hoga ussi type ka data type mana jayega...
	//ex... 34.4 ye ek decimal value he isliye ham isko direct pass karenge to iska data type double hi mana jayega....
	float d= 34.4f;//yese suffix hame tab lagane hote he jab koi jankari uske data type ke sat bhejni ho
	long double e=34.4l;
	
	cout <<"the value of d: "<<d<<endl<<"the value of e: "<<e<<endl;
	cout <<endl<<endl<<endl;
	
	cout <<"the size of 34.4 is "<<sizeof(34.4) <<endl;
	cout <<"the size of 34.4f is "<<sizeof(34.4f)<<endl;
	cout <<"the size of 34.4F is "<<sizeof (34.4F)<<endl;
	cout <<"the size of 34.4l is "<<sizeof (34.4l)<<endl;
	cout <<"the size of 34.4L is "<<sizeof (34.4L)<<endl;  
	
	
	
//    	reference variables
	
	float x=445;
	float & y=x;
	
	cout <<x<<endl;
	cout <<y<<endl;  
	
	

	
//             typecasting 
	
	int m=45;
	float n=45.5;
	
	cout <<"the value of m is "<<    (float)m<<endl;
	cout<<"the value of m is "<<float (m)<<endl;
	cout<<endl<<endl;
	
	
	
	cout<<"the value of n is "<<(int)n<<endl;
      cout<<"the value of n is "<<  int(n)<<endl;
      int p= n;
      cout <<endl<<endl<<endl<<endl;
      
      
      cout <<m+(int)n<<endl;
      cout<<m+float(m)<<endl;
      cout<<(float)m+n<<endl;
      cout<<p+m<<endl;
      cout <<p+n<<endl;
      
	
	return 0;
	
	
	
}

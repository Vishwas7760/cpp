#include <iostream>
using namespace std;

/* agar hame sum jaisa function int main se niche likhna he 
to hame compiler ko batana padega ki is code me sum(int a ,int b)
wala function exist karta he isliye hamne niche wali line likhi he......
varna agar ham ye vali line nahi likhate he to compiler sum wala
function nahi dhund payega and error Aa jayega.... */

//int sum(int a, int b); //acceptable
//int sum(int a,b);      //not acceptable	
int sum(int , int);      //acceptable

void g();


int main(){
	/* yahapar hamne iske nam (num1, num2) and (int a, int b) rakhe
	he... ham iske nam same bhi rakh sakhte he...... koi nhi problem 
	nahi Aayegi.... ex. (a,b) and (int a, int b) esa bhi chalega.... */
	
	
	int num1, num2;
	cout<<"enter the first number ";
	cin>>num1;
	cout<<"enter the second number ";
	cin>>num2;
	cout<<"the sum of two number is "<<sum(num1,num2)<<endl;
	g();
	return 0;
}


int sum(int a,int b){
	
	int c= a+b;
	return c;
}

void g(){
	
	cout<<"hello vishwas ";
}

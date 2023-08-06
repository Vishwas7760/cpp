/* 
if(condition) {

	when condirion is true then here code executed
	
	}
	
else if(condition) {
	condition true then code executed
	}
	
*/
	
#include <iostream>

	using namespace std;
	
	int main() {
		
		
		cout << "enter your age:- "<<endl;
		int age;
		cin >> age;
		
		if(age<18)
		{
			cout << "sorry brother you are not eligible for this coding round!! " << endl;
		}
		
		else if(age>=18){
		
			cout << "you are eligible for this coding round " << endl;
			}
		
		return 0;
		}


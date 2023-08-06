#include <iostream>
using namespace std;
int main () {
	double percent[] = {74.48,58.85,40.54,89.65,95.45} ;
	
	cout << "enter your roll number between 1 to 5 " << endl;
	int roll, rollnum;
	cin >> rollnum;
	roll = rollnum-1;
	
	if ( rollnum > 5 ) {
		cout << "sorry !! " << rollnum << " roll number dont exist ";
		
	}
	
	else if (rollnum < 1) {
		cout << rollnum << " roll number cant exist " << endl;
		
	}
	
	else if (roll>=0&&roll<6) {
	cout << "rollnumber = " << rollnum << endl;
	cout << "percentage = " << percent[roll];
	
	}
	
	
	
	return 0;
	}

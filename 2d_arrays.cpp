#include <iostream>

using namespace std;

int main () {
	
	int marks[3] [4] = {
		
		{67, 56, 78, 89},
		{86, 45, 56, 34},
		{23, 67, 74, 93}
		
				
		};
		
		
		int row,collum,ro,coll;
		cout << "enter your row of bench between 1 to 3:-";
		cin >> ro;
		row = ro-1;
		
		cout <<endl << "enter your collum of the bench between 1 to 4:-";
		cin >> coll;
		collum = coll-1;
		
		cout << endl << "your total mark out of 100 is " <<  marks[row] [collum] << endl; 
	
	
	return 0;
	}

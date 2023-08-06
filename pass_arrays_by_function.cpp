#include <iostream>
using namespace std;

void student(int marks[5]) {
	int roll = 1;
	
	cout << endl << endl << " here is mark of all student "<< endl << "roll no. 	marks " << endl;
	
	for (int i = 0; i<5; i++) {
		
		
		cout << roll << "			" << marks[i] << endl;
		roll++;
		}
	
	}
	
	
int main() {
	
	int roll = 1;
	int marks[5];
	for(int i=0;i<5;i++) {
		
		
		cout<<"enter mark of roll number " << roll << " - ";
		cin>>marks[i];
		roll++;
		}
	
	
	student(marks);
	
	return 0;
	}

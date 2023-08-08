#include <iostream>
using namespace std;
int main() {
	
	int num;
	cout << "enter the number of collumn you want to print in decreassing order- ";
	cin >> num;
	
	for (int i=num; i>0; i--) {
		cout << "* ";
		for(int j=i-1; j>0; j--) {
			cout << "* ";
			}
		
		cout << endl;
		}
	
	
	}

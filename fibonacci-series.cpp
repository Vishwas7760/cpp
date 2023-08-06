#include <iostream>
using namespace std;

int main() {
	
	int n;
	cin >> n;
	
	int a=0,b=a+1;
	cout <<a<< " " << b << " ";
	
	for (int num=0; num<=n; num=a+b) {
		num=a+b;
		cout << num << " ";
		
		a=b;
		b=num;
		
		}
	
	}

#include <iostream>
using namespace std;

int main() {

	int A, B, C;
	
	cin>>A>>B>>C;
	
	if((A+B)>C) cout << "tringle valid";
	
	else if ((B+C)>A)cout << "tringle valid";
	
	else if((C+A)>B) cout << "tringle valid";
	
	else cout << "tringle not valid!!!!";
	
	return 0;
	}
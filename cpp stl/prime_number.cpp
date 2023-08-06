#include <iostream>
#include <vector>
using namespace std;


int main() {
	vector<int> primenum;
	
	int n;
	cin >> n;
	
	
	int i=2;
	while (i<=n) {
		bool prime=true;
		
		for(int j=2;j<i; j++) {
			if(i%j==0) {
				prime=false;
				break;
				} 
			}
		if(prime==true) {
			primenum.push_back(i);
			}
		i++;
		}
	
	for(auto i:primenum) {
		cout << i << " ";
		
		}
	}

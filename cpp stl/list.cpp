#include <iostream>
#include <list>

using namespace std;

int main() {
	// we can same operations in list like deque but only we do not access element at any index with .at(); function for this we need to travel whole list 
	list <int> l;
	l.push_front(10);
	l.push_back(30);
	l.push_back(40);
	l.push_front(5);
	for (int i:l){
		cout << i << " ";
		}cout << endl << endl;
	
		
	l.erase(l.begin());
	cout << "after the erase: ";
	for (int i:l){
		cout << i << " ";
		}cout << endl << endl;
	
		
		
	}

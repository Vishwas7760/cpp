#include <iostream>
#include <deque>

using namespace std;

int main() {
	
	// in dwque we can add element from start & last with push_back(); & push_front function
	
	deque <int> d; // here we created a deque
	d.push_back(43);
	d.push_back(67);
	d.push_front(10);
	d.push_front(5);
	
	for(int i=0; i<d.size(); i++) {
		cout << d.at(i) << " ";
	}
	
	
	cout << endl << endl << endl << "element at index 2: " << d.at(2) << endl;
	
	
	// we can remove also element from front & back side of deque
	d.pop_back();
	d.pop_front();
	cout << "after using a pop_back() & pop_front() function: " << endl;
	for(int i=0; i<d.size(); i++) {
		cout << d.at(i) << " ";
	}
	
	
	// we can use here here front() & back() function for printing a first & last element
	
	
	cout << endl << endl << "empty or not: " << d.empty() << endl;
	
	
	d.push_back(83);
	d.push_back(98);
	
	cout << "before erasing element using erase(); function: " << endl;
	for(int i=0; i<d.size(); i++) {
		cout << d.at(i) << " ";
	}
	
	
	// now erase some element from the deque
	cout <<endl << "size of the d before erasing some element: " << d.size() << endl;
	d.erase(d.begin(), d.begin()+2); // we can also choose which stating element we want to remove like here i choose 2
	
	for(int i=0; i<d.size(); i++) {
		cout << d.at(i) << " ";
	}
	
	cout << endl << "size of d after erasing some element: " << d.size() << endl;
	
	}

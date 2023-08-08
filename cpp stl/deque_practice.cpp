#include <iostream>
#include <deque>

using namespace std;

int main() {
	
	deque <int> percent;
	// in deque we push element from starting or from endint this is the feature of deque
	// we can also pop starting element or last elemnt 
	// we can also use .at function in deque
	
	percent.push_back(67);
	//cout << percent.capacity(); we do not use capacity function in deque
	percent.push_back(45);
	percent.push_back(78);
	
	percent.push_front(10);
	percent.push_front(20);
	percent.push_front(30);
	
	for (auto i: percent) cout << i << " ";
	
	cout << endl << endl;
	
	// now lets pop some front & last element
	percent.pop_back();
	percent.pop_front();
	
	cout << " after using a pop(); " << endl;
	for (auto i: percent) cout << i << " ";
	
	cout << endl << " size of pecent:- "<< percent.size() << endl << endl;
	
	percent.erase(percent.begin(), percent.begin()+3); // its working like that erase element from thsi to this
	
	cout << "after using erase(); " << endl;
	for (auto i: percent) cout << i << " ";
	
	
	cout << " \n\n\n size after using erase :--- " << percent.size() << endl << endl;	
	
	
	if (percent.size()==true)
	cout << "mission completed!!!!!!!";
	
	}

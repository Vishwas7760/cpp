#include <iostream>
#include <set>

using namespace std;

int main() {
	// set does not take any value repeatly
	// set print our element in greater order
	set <int> s;
	s.insert(3);
	s.insert(3);
	s.insert(65);
	s.insert(6);
	s.insert(5);
	s.insert(8);
	s.insert(9);
	s.insert(9);
	s.insert(9);
	s.insert(1);
	s.insert(0);
	
	for ( auto i:s)
	cout << i << " ";
	
	
	cout << endl <<"in this set 5 are present ? --- " << s.count(5) << endl;
	s.erase(s.begin());
	
	for (auto i:s) cout << i << " ";
	
	
	
	}

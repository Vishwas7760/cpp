#include <iostream>
#include <map>

using namespace std;

int main() {
	
	
	map <int, string> m;
	
	m[1] = "vishwas";
	m[4] = "vishnu";
	m[23] = "babar"; // we can add element with this
	m.insert({12, "great"});
	
	cout << m[4] << endl;
	
	for (auto i: m)
	cout << i.first << ")  " + i.second << endl; // from this we can print all element
	
	cout << "khali he bhai---> " << m.empty()<< endl;
	cout << "size--> " << m.size() << endl; // << "capacity--> " << m.capacity();  this code is not work bcoz we dont use this function in map;
	
	cout << "23 available or not ----> " << m.count(23) << endl << endl; // for finding element we use .count();
	
	cout << " before erase.>>>>> " << endl;
	for (auto i:m) cout << i.first << ") " << i.second << endl;
	
	m.erase(12); // we erase here key 12
	
	cout << endl << "after erase ---->>>>>>>> " << endl;
	for (auto i: m) cout << i.first << ") "  << i.second << endl;
	
	
	}

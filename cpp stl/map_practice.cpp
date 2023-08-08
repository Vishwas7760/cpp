#include <iostream>
#include <map>

using namespace std;

int main() {
	
	map <int, string> standard; // here we created map name as clas, in first this map are store int data & second that will storing a string
	// ex. int -->> roll numbers , string---->>name of student
	
	standard[1] = "ganesh bhapkar";
	standard[4] = "satish gole"; // we can store data with this syntaxes
	standard.insert({2, "vishwas babar"});
	standard.insert({3, "dinesh arekar"}); // we can also use this method for storing a data
	standard[5] = "vishal babar";
		
	/*
	map <string,int> t;
	t["sf"] = 43;
	
	cout << t["s"] << t.size();
	*/
	
	
	// now lets print this all roll numbers and name
	for (auto i: standard) 
	cout << i.first << ") " << i.second << endl;
	
	cout << "\n\n";
	
	cout << " is standard empty--->> " << standard.empty() << endl << endl;
	bool tf= standard.count(4);
	cout << "there is 4 roll number available" << tf << endl; // line 33
	// line 33 & 35 are not printing 0 or 1.....
	cout << "there is 5 roll number available" << standard.count(5) << endl; // line 35
	
	}

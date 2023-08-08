#include <iostream> 
#include <array>

using namespace std;

int main() {
	
	
	int basic[] = {12,34,55,65}; // this is basic normal array
	int si=  sizeof(basic)/sizeof(int);  //  
	for (int i=0; i<si; i++) cout << basic[i] << endl;
	
	
	
	
	cout << endl << endl << endl;
	// now lets use the stl
	array<int,4> a = {36,48, 4,54}; // this is stl array;
	int size = a.size(); // this .size function return us the size of array 
	cout << size<< endl << endl << endl;
		
	cout << " stl array value at at index 2: " << a.at(2) << endl; // .at() function find value at any index 
	
	cout << " empty or not : " << a.empty() << endl; // out put 0 or 1
	
	cout << " first element : " << a.front() << endl; // first element of stl array
	cout << " last element : " << a.back() << endl; // last element
	
	
	
	
	
	
	
	return 0;
	}

#include <iostream>
#include <vector>

using namespace std;

int main() {
	
	// agar ham isme jagah na hone ke bad bhi kuch dalte he to vector apne size ko double karta he
	vector <int> v;
	cout << v.capacity() << endl; // capacity() function return the how much the capacity of vector 
	cout << v.size() << endl; // size() function return how much element are in the vector
	
	
	v.push_back(45); // for adding a element in vector we use push_back() function
	cout << v.capacity() << endl;
	
	
	v.push_back(67);
	cout << v.capacity() << endl;
	
	v.push_back(98);
	cout << "capacity: " << v.capacity() << endl;
	cout << "how much element are in this vector: " <<v.size() << endl;
	
	
	cout << "element at 2nd index: " << v.at(2) << endl;
	
	cout << "FIRST ELEMENT: " << v.front() << " AND LAST ELEMENT: " << v.back() << endl;
	
	
	// now lwts use pop_back() function;
	cout << "before pop_back: " << endl;
	for (int i = 0; i<v.size(); i++) cout << v.at(i) << " ";
	
	
	v.pop_back();
	cout << endl << endl << "after a pop_back(): " << endl;
	for (int j=0; j<v.size(); j++) cout << v.at(j) << " ";
	
	
	cout << endl << endl << "before using clear(), size: " << v.size() << endl;
	
	v.clear(); //clear() funtion clean all data from the vector
	cout << "after using a clear(), size: " << v.size() << endl;
	
	cout << "if we use clear() then capacity of vector remain as it is, here is capacity: " << v.capacity() << endl << endl << endl;
	
	
	
	
	vector <int> d(4,2); // here we created one vectore size is 4 and store 2 in everyplace
	cout <<"here is d vector element: " << endl;
	for (int x=0; x< d.size(); x++) cout << d.at(x) << " ";
	
	// copy one vector element and paste as it is in other vector
	vector <int> g(d);
	cout << endl << endl << "here we copied d vector elements: " << endl;
	for (int s=0; s<g.size(); s++) cout << g.at(s) << " " ; 
	
	}

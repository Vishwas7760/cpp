#include <iostream> 
#include <stack>

using namespace std;

int main() {
	// stack: last in first out
	
	stack <string> s;
	
	// in stack we only have some function :- .push(), .top(), empty(), .pop()
	
	
	s.push("vishwas ");
	s.push("vishnu ");
	s.push("babar ");
	
	cout << s.top() << endl;
	cout << "size of the stack is : " << s.size() << endl;
	
	
	// for removing any element we can use only pop();
	s.pop();
	cout << "after using a pop() : " << s.top() << endl << "size: " << s.size() << endl;
	
	
	}
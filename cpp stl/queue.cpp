#include <iostream>
#include <queue>

using namespace std;

int main() {
	// queue = first in first out
	
	queue <string> q;
	q.push("vishal ");
	q.push("ashok ");
	q.push("babar ");
	
	
	cout << "first element: " << q.front() << q.back() << endl;
	
	q.pop();
	cout << "after using a pop() :" << endl;
	cout << "first element : " << q.front() << q.back();
	
	}

#include <iostream>
#include <queue>

using namespace std;

int main() {
	
	queue <int> rollnum;
	rollnum.push(76);
	rollnum.push(12);
	rollnum.push(57);
	
	
	cout << "first element:- "<< rollnum.front() << endl << "last element:- " << rollnum.back()<< endl;
	
	cout << "that will be empty or not give me answer right now ----> " << rollnum.empty() << endl;
	
	// in queue :___ if we push any elemrnt then it will be stored in sequenced indexes & if we pop this then always elment erase with starting
	rollnum.pop();
	cout << "after a pop(); \n";
	cout << "first element :> " << rollnum.front() << endl;
	
	}

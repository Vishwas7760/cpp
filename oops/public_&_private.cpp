#include <iostream>
using namespace std;

class myclass {
	// public: we can access also outside the class
	// private: we can access only inside the class
	public:
	int x;
	
	private:
	int y;
	
	
	};


int main() {
	
	myclass one;
	
	one.x = 4;
	//one.y = 5; // error occurs bcoz y is private member
	
	
	// note - by default all member off clsas are private
	return 0;
	}
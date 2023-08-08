#include <iostream>

using namespace std;

int main() {
	
	struct mystruct {
		
		string brand;
		int prize;
		string model;
		
		
		
		};
	
	
	mystruct mobile;
	mobile.brand = "redmi";
	mobile.prize = 11000;
	mobile.model = "redmi note 9";
	
	
	cout << "brand = " << mobile.brand << endl << "prize = " << mobile.prize << endl << "model = " << mobile.model << endl << endl << endl << endl;

	
		
	mystruct laptop;
		laptop.brand = 	"Hp";
		laptop.prize = 38000;
		laptop.model = "hp gaming 07";
		
		
	cout << "brand = " << laptop.brand << endl << "prize = " << laptop.prize << endl << "model = " << laptop.model << endl << endl << endl << endl;
		
		
		
		
		
		
		return 0;
	}

#include <iostream>
#include <queue>

using namespace std;

int main(){
	
	// now lets print the some element in lower order using priority queue
	priority_queue <int> maxi;
	maxi.push(10);
	maxi.push(20);
	maxi.push(50);
	maxi.push(40);
	
	int n=maxi.size();
	for (int i=0; i<n; i++) {
		cout << maxi.top() << " ";
		maxi.pop();
		}cout << endl << endl;
	
	// now lest print elment in greater order
	priority_queue<int, vector<int>, greater<int> >mini;
	
	mini.push(43);
	mini.push(12);
	mini.push(56);
	mini.push(34);
		
		
	cout << "mini element in greater order-->> ";
	int x= mini.size();
	for (int y=0; y<x; y++) {
	
		cout << mini.top() << " ";
		mini.pop();
		}cout << endl << endl;
	
	}	
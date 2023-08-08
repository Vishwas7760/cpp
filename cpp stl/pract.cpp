#include <ostream> 
#include <map>

using namespace std;

int main() {
	
	map <int, string> maps;
	maps[1] = "jalna";
	maps.insert({6, "pune"});
	maps[2] = "hydrabad";
	
	// lets see what is size of this map
	cout << maps.size() << endl;
	
	cout << maps[1] << endl;
	
	for (auto i: maps) cout << i.first << ") " << i.second << endl;
	
	cout << " 2 roll num is available or not--->> " << maps.count(2) << endl;
	
	cout << "have a nice day by see you again";
	
	
	
	}
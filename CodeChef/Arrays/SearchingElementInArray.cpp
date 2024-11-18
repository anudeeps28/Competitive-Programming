#include <iostream>
#include<vector>
using namespace std;

int main() {
	// your code goes here
	int sizeOfArray;
	cin >> sizeOfArray;
	int target;
	cin >> target;
	
	std::vector<int> v;
	for (int i = 0; i < sizeOfArray; i++) {
	    int x;
	    cin >> x;
	    v.push_back(x);
	}
	
	auto it = find(v.begin(), v.end(), target);
	if (it != v.end()) {
	    std::cout << "YES" << std::endl;
	}
	else {
	    cout << "NO";
	}

}

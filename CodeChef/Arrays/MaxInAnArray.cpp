/**
 * @file MaxInAnArray.cpp
 * @brief Finding the maximum element in an array
 * @version 0.1
 * @date 2024-11-19
 * 
 * @copyright Copyright (c) 2024
 * 
 */

#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin >> T;
	
	while (T--) {
	    int sizeOfArray;
	    cin >> sizeOfArray;
	    std::vector<int> v;
	    for (int i = 0; i < sizeOfArray; i++) {
	        int x;
	        cin >> x;
	        v.push_back(x);
	    }
	    sort(v.begin(), v.end());
	    auto it = v.end()-1;
	    std::cout << *(it) << std::endl;
	}

}

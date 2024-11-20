/**
 * @file SearchingElementInArray.cpp
 * @author anudeep
 * @brief This file shows how to search an element in a vector
 * @version 0.1
 * @date 2024-11-19
 * 
 * @copyright Copyright (c) 2024
 * 
 */

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

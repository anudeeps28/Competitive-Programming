/**
 * @file TraversingArraysAndVectors.cpp
 * @brief: 
    * Determine whether applying a discount y to each item (reducing its cost but not below zero) 
    * and adding a fixed cost x results in a total cost lower than the initial sum of the 
    * item's costs.
 * @version 0.1
 * @date 2024-11-19
 * 
 * @copyright Copyright (c) 2024
 * 
 */

// vectors version
#include <iostream>
#include <vector>
#include <numeric> // For std::accumulate
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, x, y;
        cin >> n >> x >> y;

        vector<int> arr(n);
        for (int &element : arr) {
            cin >> element;
        }

        // Calculate the initial sum
        int initial_sum = accumulate(arr.begin(), arr.end(), 0);

        // Adjust array values based on the condition
        for (int &element : arr) {
            element = max(0, element - y);
        }

        // Calculate the new sum with x added
        int new_sum = x + accumulate(arr.begin(), arr.end(), 0);

        // Output result
        if (new_sum < initial_sum) {
            cout << "COUPON" << endl;
        } else {
            cout << "NO COUPON" << endl;
        }
    }

    return 0;
}


// arrays version
#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n,x,y;
        cin>>n>>x>>y;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        // your code goes here
        int sum1 = 0;
        for (int i = 0; i < n; i++) {
            sum1 += a[i];
        }
        
        int sum2 = x;
        for (int i = 0; i < n; i++) {
            if (a[i] > y) {
                a[i] = a[i] - y;
            } 
            else {
                a[i] = 0;
            }
        }
        for (int i = 0; i < n; i++) {
            sum2 += a[i];
        }
        
        if (sum2 < sum1) {
            std::cout << "COUPON" << std::endl;
        } else {
            cout << "NO COUPON" << endl;
        }
    }

}


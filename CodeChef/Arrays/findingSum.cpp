/**
 * @file findingSum.cpp
 * @brief: freshness and cost are 2 arrays. total cost of items whose freshness is >= x
 * @version 0.1
 * @date 2024-11-19
 * @copyright Copyright (c) 2024
 * 
 */
// vector version
#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n >> x;

        vector<int> a(n), b(n);
        for (int &element : a) {
            cin >> element;
        }
        for (int &element : b) {
            cin >> element;
        }

        int totalCost = 0;
        for (int i = 0; i < n; i++) {
            if (a[i] >= x) {
                totalCost += b[i];
            }
        }

        cout << totalCost << endl;
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
        int n,x;
        cin>>n>>x;
        int a[n],b[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int j=0;j<n;j++){
            cin>>b[j];
        }
        // your code goes here
        int totalCost = 0;
        for (int i = 0; i < n; i++) {
            if (a[i] >= x) {
                totalCost += b[i];
            }
        }
        std::cout << totalCost << std::endl;
    }

}

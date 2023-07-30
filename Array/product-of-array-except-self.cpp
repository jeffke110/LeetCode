#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        
        int n = nums.size();
        vector<int> res(n, 1);
        int left = 1, right = 1;
        
        // Compute the product of all elements to the left of i
        for (int i = 0; i < n; i++) {
            res[i] *= left;
            left *= nums[i];
        }

        for (int num : res) {
            cout << num << " ";
        }
        
        // Compute the product of all elements to the right of i
        for (int i = n-1; i >= 0; i--) {
            res[i] *= right;
            right *= nums[i];
        }
        cout << endl;
        for (int num : res) {
            cout << num << " ";
        }
        
        return res;
    }
};
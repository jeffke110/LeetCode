#include <vector>
#include <algorithm>
#include <iostream>
#include <numeric>


class Solution {
public:
    std::vector<int> productExceptSelf(std::vector<int>& nums) {
            int n = nums.size();
        std::vector<int> answer(n, 1);
        
        // Compute the left products
        int left_product = 1;
        for (int i = 0; i < n; ++i) {
            answer[i] = left_product;
            left_product *= nums[i];
        }
        
        // Compute the right products and multiply with left products
        int right_product = 1;
        for (int i = n - 1; i >= 0; --i) {
            answer[i] *= right_product;
            right_product *= nums[i];
        }
        
        return answer;
    }
};
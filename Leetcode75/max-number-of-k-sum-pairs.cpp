#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>

/*
https://leetcode.com/problems/max-number-of-k-sum-pairs/description/?envType=study-plan-v2&envId=leetcode-75
You are given an integer array nums and an integer k.

In one operation, you can pick two numbers from the array whose sum equals k and remove them from the array.

Return the maximum number of operations you can perform on the array.
*/

class Solution {
public:
    int maxOperations(std::vector<int>& nums, int k) {
             // Sort the array
        std::sort(nums.begin(), nums.end());

        int left = 0;
        int right = nums.size() - 1;
        int maxOperations = 0;

        // Use two pointers to find pairs that sum to k
        while (left < right) {
            int currentSum = nums[left] + nums[right];

            if (currentSum == k) {
                // Found a pair
                maxOperations++;
                left++;
                right--;
            } else if (currentSum < k) {
                // Move left pointer to increase sum
                left++;
            } else {
                // Move right pointer to decrease sum
                right--;
            }
        }

        return maxOperations;

    }
};
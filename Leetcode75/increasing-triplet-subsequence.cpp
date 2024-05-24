#include <iostream>
#include <vector>
#include <limits.h>


class Solution {
public:
    bool increasingTriplet(std::vector<int>& nums) {
        if (nums.size() < 3) {
            return false;
        }

        int first = INT_MAX;
        int second = INT_MAX;

        for (int num : nums) {
            if (num <= first) {
                first = num; // smallest so far
            } else if (num <= second) {
                second = num; // second smallest
            } else {
                // If we reach here, it means we found a number greater than both 'first' and 'second'
                return true;
            }
        }

        return false;

    }
};
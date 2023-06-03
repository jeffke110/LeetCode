#include <vector>
#include <iostream>
//https://leetcode.com/problems/missing-number/
/*
int missingNumber(vector<int>& nums) {
        int n = nums.size();
        int expectedSum = (n * (n + 1)) / 2; // sum of integers from 0 to n
        int actualSum = accumulate(nums.begin(), nums.end(), 0); // sum of elements in the array
        return expectedSum - actualSum; // the missing number is the difference between the expected sum and the actual sum
    }
*/
class Solution {
public:
    int missingNumber(std::vector<int>& nums) {
        int n = nums.size();
        int missing = n; // Initialize missing as the last index

        for (int i = 0; i < n; i++) {
            missing ^= i ^ nums[i];
        }

        return missing;
    }
};

int main() {
    int n;
    std::cout << "Enter the number of elements in the array: ";
    std::cin >> n;

    std::vector<int> nums(n);
    std::cout << "Enter the elements of the array (space-separated): ";
    for (int i = 0; i < n; i++) {
        std::cin >> nums[i];
    }

    Solution solution;
    int missing = solution.missingNumber(nums);

    std::cout << "The missing number is: " << missing << std::endl;

    return 0;
}

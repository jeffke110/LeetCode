#include <vector>
#include <algorithm>

using namespace std;


class Solution {
public:

    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        int expectedSum = (n * (n + 1)) / 2; // sum of integers from 0 to n
        int actualSum = accumulate(nums.begin(), nums.end(), 0); // sum of elements in the array
        return expectedSum - actualSum; // the missing number is the difference between the expected sum and the actual sum
    }
   
};
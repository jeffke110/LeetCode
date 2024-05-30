#include <iostream>
#include <vector>
#include <limits.h>

class Solution
{
public:
    double findMaxAverage(std::vector<int> &nums, int k)
    {
        int n = nums.size();
        if (n < k)
        {
            return 0.0;
        }
        
        double currSum = 0;
        for(int i = 0; i < k; i++){
            currSum += nums[i];
        }
        double maxSum = currSum;
        for(int i = k; i < n; i ++){
            currSum += nums[i] - nums[i - k];
            if(currSum > maxSum){
                maxSum = currSum;
            }
        }

        return maxSum / k;


    }
};
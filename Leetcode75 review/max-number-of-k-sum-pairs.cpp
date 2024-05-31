#include <vector>
#include <iostream>
#include <algorithm>

class Solution
{
public:
    int maxOperations(std::vector<int> &nums, int k)
    {
        std::sort(nums.begin(), nums.end());
        int left = 0;
        int right = nums.size() - 1;
        int maxOperations = 0;

        while(left < right){
            int currentsum = nums[left] + nums[right];
            if(currentsum == k){
                maxOperations++;
                left++;
                right--;
            }else if(k > currentsum){
                left++;
            }else{
                right--;
            }
        }

        return maxOperations;

    }
};
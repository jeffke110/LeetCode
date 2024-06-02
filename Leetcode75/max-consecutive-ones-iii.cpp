#include <iostream>
#include <vector>

class Solution
{
public:
    int longestOnes(std::vector<int> &nums, int k)
    {
        int zeros = 0;
        int left = 0;
        int right = 0;


        for(right = 0; right < nums.size(); right++){
            if(nums[right] == 0){
                zeros++;
            }
            if(zeros > k){
                if(nums[left] == 0){
                    zeros--;
                }
                left++;
            }


        }
        return right - left;


    }
};
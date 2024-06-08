#include <iostream>
#include <vector>

class Solution
{
public:
    int longestSubarray(std::vector<int> &nums)
    {
        int left = 0;
        int right = 0;
        int countZero = 0;
        int maxCount = 0;

        for(right = 0; right < nums.size(); right++){
            if(nums[right] == 0){
                countZero++;
            }

            if(countZero > 1){
                if(nums[left] == 0){
                    countZero--;
                }
                left++;
            }

            maxCount = std::max(maxCount, right - left);

        }

        return maxCount;
    }
};
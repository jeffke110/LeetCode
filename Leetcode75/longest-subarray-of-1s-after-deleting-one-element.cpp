#include <iostream>
#include <vector>


class Solution {
public:
    int longestSubarray(std::vector<int>& nums) {
        int left = 0;
        int right = 0; 
        int k = 0;
        int count = 0;
        int maxLength = 0;
        
        for(right = 0; right < nums.size(); right++){
            if(nums[right] == 0){
                k++;
            }
            while(k > 1){
                if(nums[left] == 0){
                    k--;
                }
                left++;
            }
            maxLength = std::max(maxLength, right - left);
        }

        return maxLength;


    }
};
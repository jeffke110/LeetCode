#include <iostream>
#include <vector>




class Solution {
public:
    int longestOnes(std::vector<int>& nums, int k) {
        int left = 0;
        int right = 0;
        int zeroCount = 0;

        for(right = 0; right < nums.size(); right++){
            if(nums[right] == 0){
                zeroCount++;
            }

            if(zeroCount > k){
                if(nums[left] == 0){
                    zeroCount--;
                }
                left++;
            }
        }

        return right -left ;
    }
};
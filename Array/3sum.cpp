#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> result;
        int n = nums.size();
        
        // Sorting the array to easily skip duplicates
        sort(nums.begin(), nums.end());
        
        for (int i = 0; i < n - 2; i++) {
            // Skip duplicates for the first number
            if(i > 0 && nums[i] == nums[i-1]){
                continue;
            }
            int left = i + 1;
            int right = n - 1;

            while(left < right){
                int sum = nums[left] + nums[i] + nums[right];

                if(sum < 0){
                    left++;
                }else if(sum > 0){
                    right--;
                }else{
                    //sum == 0
                    result.push_back({nums[i], 
                    nums[left], nums[right] }
                    );

                    while(left < right && nums[left] == nums[left + 1]){
                        left++;
                    }
                    while(left < right && nums[right] == nums[right - 1]){
                        right--;
                    }
                     left++;
                    right--;
                }

            }

        }
        
        return result;
        }
};

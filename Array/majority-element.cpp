
#include <vector>
#include <unordered_map>


class Solution {
public:
    int majorityElement(std::vector<int>& nums) {
        std::unordered_map <int, int> numsMap;
        std::pair<int, int> maxNumber{0, 0};
        for(auto & number : nums){
            numsMap[number]++;
            if(numsMap[number] > maxNumber.second){
                maxNumber = {number,  numsMap[number]};
            }
        }
        return maxNumber.first;
    }
};
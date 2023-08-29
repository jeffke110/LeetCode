#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>

class Solution {
public:
    int removeDuplicates(std::vector<int>& nums) {
        std::unordered_map<int, int> numMap;
        for(auto it = nums.begin(); it != nums.end();){
            numMap[*it]++;
            if(numMap[*it] > 2){
                nums.erase(it);
            }else{
                *it++;
            }
        }
        return nums.size();
    }
};
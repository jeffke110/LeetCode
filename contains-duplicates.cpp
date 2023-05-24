#include <iostream>
#include <unordered_map>
#include <vector>

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        //createa a map
        std::unordered_map <int, int> count;

        // iterate through the map and incrementing each element
        for(const auto& num : nums){
            count[num]++;
        }
        
        //see if there is a frequency more than one
        bool found_dup = false;
        for (const auto& [num, freq] : count) {
            if(freq > 1){
                found_dup = true;
            }
        }

        return found_dup;
        
    }
};
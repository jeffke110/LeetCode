#include <iostream>
#include <vector>
#include <map>

using namespace std;

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        map<int, int> map;
        for(const auto & i : nums){
            map[i]++;
        }
        std::pair<int, int> max = {0, 0};
        for(const auto& i : map){
            if(i.second > max.second){
                max = i;
            }
        }
        return max.first;
    }
};
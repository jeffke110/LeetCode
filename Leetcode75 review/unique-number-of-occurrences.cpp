#include <vector>
#include <unordered_map>
#include <unordered_set>


class Solution {
public:
    bool uniqueOccurrences(std::vector<int>& arr) {
        std::unordered_map<int, int> numMap;
        std::unordered_set<int> numSet;

        for(const auto num : arr){
            numMap[num]++;
        }
        for(const auto num : numMap){
            if(numSet.count(num.second) > 0){
                return false;
            }else{
                numSet.emplace(num.second);
            }
        }
        return true;
    }
};
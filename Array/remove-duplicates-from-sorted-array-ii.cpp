#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        unordered_map <int, int> numsMap;
        int count = 0;
        for(auto iter = nums.begin(); iter != nums.end();){
            numsMap[*iter]++;
            if(numsMap[*iter] > 2){
                iter = nums.erase(iter);
            }else{
                count++;
                ++iter;
            }
        }

        return count;
    }
};
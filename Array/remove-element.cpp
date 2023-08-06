#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {

        auto it = std::remove_if(nums.begin(), nums.end(), [&](int input){  return input == val; });
        nums.erase(it, nums.end());
        return nums.size();
    }
};
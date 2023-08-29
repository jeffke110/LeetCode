#include <iostream>
#include <vector>
#include <algorithm>


class Solution {
public:
    void merge(std::vector<int>& nums1, int m, std::vector<int>& nums2, int n) {
        nums1.resize(m);
        nums1.insert(nums1.begin(), nums2.begin(), nums2.end());
        std::sort(nums1.begin(), nums1.end());
    }     
};


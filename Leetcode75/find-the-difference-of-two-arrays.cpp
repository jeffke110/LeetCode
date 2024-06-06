#include <iostream>
#include <vector>
#include <unordered_map>
#include <set>
#include <algorithm>

class Solution
{
public:
    std::vector<std::vector<int>> findDifference(std::vector<int> &nums1, std::vector<int> &nums2)
    {
    std::set<int> set1(nums1.begin(), nums1.end());
    std::set<int> set2(nums2.begin(), nums2.end());

    std::vector<int> diff1, diff2;

    // Find elements in nums1 but not in nums2
    std::set_difference(set1.begin(), set1.end(), set2.begin(), set2.end(), std::back_inserter(diff1));

    // Find elements in nums2 but not in nums1
    std::set_difference(set2.begin(), set2.end(), set1.begin(), set1.end(), std::back_inserter(diff2));

    return {diff1, diff2};
    }
};
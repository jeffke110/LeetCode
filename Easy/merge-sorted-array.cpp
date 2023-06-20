#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

class Solution
{
public:
    void merge(vector<int> &nums1, int m, vector<int> &nums2, int n)
    {
        if (n == 0)
        {
            return;
        }
        else if (m == 0)
        {
            nums1 = std::move(nums2);
            return;
        }
        nums1.erase(nums1.begin() + m, nums1.end());
        nums1.insert(nums1.begin(), nums2.begin(), nums2.end());
        sort(nums1.begin(), nums1.end());
    }
};
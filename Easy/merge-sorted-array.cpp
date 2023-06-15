#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        //return nums1
        if(n == 0){
            return;
        }
        //return nums2
        else if(m == 0){
            copy_n(nums2.begin(), n, nums1.begin());
            return;
        }

        copy_n(nums2.begin(), n, nums2.begin());

        nums1.erase(nums1.begin() + m, nums1.end());
        nums1.insert(nums1.begin(), nums2.begin(), nums2.end());
        sort(nums1.begin(), nums1.end() );
    }
};
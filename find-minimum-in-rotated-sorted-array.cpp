class Solution {
public:
    int findMin(vector<int>& nums) {
         int left = 0;
        int right = nums.size() - 1;

        // If the array is not rotated, the minimum element is the first element
        if (nums[left] <= nums[right]) {
            return nums[left];
        }

        // Perform binary search to find the minimum element
        while (left < right) {
            int mid = left + (right - left) / 2;

            if (nums[mid] > nums[right]) {
                // The minimum element is in the right half
                left = mid + 1;
            } else {
                // The minimum element is in the left half or is the mid element
                right = mid;
            }
        }

        return nums[left];
    }
};
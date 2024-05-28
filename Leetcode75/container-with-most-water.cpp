#include <iostream>
#include <vector>
#include <algorithm> 


class Solution {
public:
    int maxArea(std::vector<int>& height) {
        int maxArea = 0;
        int left = 0;
        int right = height.size() -1 ;
        while(left < right){
            int minHeight = std::min(height[right], height[left]);
            int width = (right - left);
            int area = width * minHeight;
            if(area > maxArea){
                maxArea = area;
            }
            if(minHeight == height[right]){
                right--;
            }else{
                left++;
            }
        }
        return maxArea;
    }
};
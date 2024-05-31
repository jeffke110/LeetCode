#include <iostream>
#include <vector>

class Solution {
public:
    int maxArea(std::vector<int>& height) {
        int maxarea = 0;
        int left = 0;
        int right = height.size() - 1;

        while(left < right){
            int minHeight = std::min(height[left], height[right]);
            int width = right - left;
            int area = width * minHeight;
            if(area > maxarea){
                maxarea = area;
            }
            if(height[left] > height[right]){
                right--;
            }else{
                left++;
            }
        }
        return maxarea;


    }
};
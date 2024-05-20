#include <iostream>
#include <vector>
#include <algorithm>

class Solution {


/*
Input: candies = [2,3,5,1,3], extraCandies = 3
Output: [true,true,true,false,true] 
*/
public:
    std::vector<bool> kidsWithCandies(std::vector<int>&candies, int extraCandies ){
        std::vector<bool> output;
        // get the max of the vector of candies
        auto maxIterator  = std::max_element(candies.begin(), candies.end());
        int maxValue = *maxIterator;
        for (const auto element : candies){
            if(element + extraCandies >= maxValue){
                output.push_back(true);
            }else{
                output.push_back(false);
            }
        }
        return output;
    }











};
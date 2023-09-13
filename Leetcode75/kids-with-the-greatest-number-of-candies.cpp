#include <iostream>
#include <vector>
#include <algorithm>

class Solution
{
public:
    std::vector<bool> kidsWithCandies(std::vector<int> &candies, int extraCandies)
    {
        auto it = std::max_element(std::begin(candies), std::end(candies));
        int max_element = *it;
        std::vector<bool> output;
        for(const auto candie: candies){
            if(candie + extraCandies >= max_element){
                output.push_back(true);
            }else{
                output.push_back(false);
            }
        }
        return output;
    }
};
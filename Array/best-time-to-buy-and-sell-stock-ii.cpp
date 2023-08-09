#include <vector>

using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
                //index, price
        std::pair<int, int> minPrice{0, INT_MAX};
        std::pair<int, int> maxPrice{0, 0};
        int output = 0;

        for(int i = 0; i < prices.size(); i++){
            
            if(prices[i] < maxPrice.second){
                output += std::max(maxPrice.second - minPrice.second, 0);
                minPrice = {0, INT_MAX};
                maxPrice = {0, 0};
            }
            

            if(prices[i] > maxPrice.second){
                maxPrice = {i, prices[i]};
            }

            if(prices[i] < minPrice.second){
                minPrice = {i, prices[i]};
            }
        }
        output += std::max(maxPrice.second - minPrice.second, 0);
        return output;
    }
};
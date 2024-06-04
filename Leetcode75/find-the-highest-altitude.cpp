#include <iostream>
#include <vector>


class Solution {
public:
    int largestAltitude(std::vector<int>& gain) {
        int highestAltitude = 0;
        int sum = 0;

        for(int i = 0; i < gain.size(); i++){
            sum += gain[i];
            highestAltitude = std::max(sum, highestAltitude);
        }
        return highestAltitude;

    }
};
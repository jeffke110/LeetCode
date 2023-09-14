#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int count = 0;
        int i = 0;
        int size = flowerbed.size();
        while(i < size){
            if(flowerbed[i] == 0){
                if((i == 0 || flowerbed[i - 1] == 0) && (i == size - 1 || flowerbed[i + 1] == 0)){
                    count++;
                    flowerbed[i] = 1;
                }
            }
            i = i + 1;
        }
        return count >= n;
    }
};
#include <iostream>
#include <vector>
using namespace std;

class Solution {

    bool canPlaceFlowers(vector<int>&flowerbed, int n){
        int length = flowerbed.size() - 1;
        int i = 0;
        while(i < flowerbed.size()){
            if(flowerbed[i] == 0){
                if((i == 0 || flowerbed[i-1] == 0) && (i = length || flowerbed[i + 1] == 0)){
                    n--;
                    flowerbed[i] = 1;
                }
            }
            i++;
        }
        return n <= 0;
    }

};
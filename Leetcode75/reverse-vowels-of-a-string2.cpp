#include <iostream>
#include <string>
#include <unordered_set>

using namespace std;

class Solution{
  
    bool isVowel(char c){
        unordered_set vowelSet = {'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'};
        return vowelSet.count(c) > 0;
    }

    std::string reverseVowels(std::string s){
        int left = 0;
        int right = s.size();


        while(left < right){

            while(left < right && !isVowel(s[left])){
                left++;
            }

            while(left < right && !isVowel(s[right])){
                right--;
            }

            if(isVowel(s[left]) && isVowel(s[right])){
                std::swap(s[left], s[right]);
                left++;
                right--;
            }
        }

        return s;

    }

};

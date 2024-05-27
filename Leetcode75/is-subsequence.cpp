#include <iostream>
#include <string>

class Solution {
public:
    bool isSubsequence(std::string s, std::string t) {
        int sIndex = 0;
        int tIndex = 0;

        while(tIndex < t.size()){
            if(s[sIndex] == t[tIndex]){
                sIndex++;
            }
            tIndex++;
        }
        std::cout << sIndex << std::endl;
        return sIndex == s.size();
    }
};
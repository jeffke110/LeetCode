#include <iostream>
#include <string>


class Solution {
public:
    std::string mergeAlternately(std::string word1, std::string word2) {
            int maxStringsSize = std::max(word1.size(), word2.size());
            std::string output;
            int index = 0;
            while(index < maxStringsSize){
                if(index < word1.size()){
                    output.push_back(word1[index]);
                }
                if(index < word2.size()){
                    output.push_back(word2[index]);
                }
                index++;
            }
            return output;
    }
};
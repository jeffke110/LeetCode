#include <iostream>
#include <string>





class Solution {

public:
    std::string mergeAlternately(std::string word1, std::string word2){
        size_t maxString = std::max(word1.size(), word2.size());
        int index = 0;
        std::string output;
        while(index < maxString){
            if(index < word1.size()){
                output.push_back(word1[index]);
            }
            if(index < word2.size()){
                output.push_back(word2[index]);
            }
        }
        return output;
    }


};
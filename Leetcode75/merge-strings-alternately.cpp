#include <iostream>
#include <string>



class Solution {
public:
    std::string mergeAlternately(std::string word1, std::string word2) {
        int size = std::max(word1.size(), word2.size());
        std::string output = "";
        int i = 0;
        while(i < size){
            if(i < word1.size()){
                output.push_back(word1[i]);
            }   
            if(i < word2.size()){
                output.push_back(word2[i]);
            }   
            i++;      
        }
        return output;
    }
};
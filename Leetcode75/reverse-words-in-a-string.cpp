#include <sstream>
#include <string>
#include <vector>

class Solution {
public:
    std::string reverseWords(std::string s) { 
        std::istringstream iss(s);
        std::string word;
        std::vector<std::string> wordVec;

        while(iss>>word){
            wordVec.push_back(word);
        }
        std::reverse(wordVec.begin(), wordVec.end());

        std::string output;
        for(auto& word : wordVec){
            output += word;
            if(&word != &wordVec.back()){
                output += " ";
            }
        }
        return output;
    }
};
#include<iostream>
#include<vector>
#include <map>
#include <string>


class Solution {
public:
    int compress(std::vector<char>& chars) {
        std::vector<char> output;
        if(chars.size() == 1){
            return 1;
        }
        std::map<int,int> charMap;
        for(const auto num: chars){
            charMap[num]++;
        }
        for(const auto element : charMap){
            if(element.second == 1){
                output.push_back(element.first);
            }
            else if(element.second >= 10){
                output.push_back(element.first);
                std::string str = std::to_string(element.second);
                std::vector<char> charVector(str.begin(), str.end());
                output.insert(output.end(), charVector.begin(), charVector.end());
            }
            else{
                output.push_back(element.first);
                output.push_back(element.second);
            }
        }
        chars = output;
        return chars.size();;
    }
};
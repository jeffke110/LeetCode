#include <sstream>
#include <string>
#include <vector>

class Solution {
public:
    std::string reverseWords(std::string s) { 


        // split up the string into a vector of strings from the back
        int right = s.length() - 1;
        int left = 0;
        std::string word;
        std::string words;
        while(left <= right){
            while(left <= right && s[left] != ' '){
                word.push_back(s[left]);
                left++;
            }
            while(left <= right && s[left] == ' '){
                left++;
            }
            word.push_back(' ');
            words = word + words;
            word.clear();
        }
        size_t end = words.find_last_not_of(' ');
        words.erase(end + 1);
        return words;
    }
};
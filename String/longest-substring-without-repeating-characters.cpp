#include <iostream>
#include <unordered_set>

class Solution {
public:
    int lengthOfLongestSubstring(std::string s) {
        int n = s.size();
        int maxLength = 0;
        int i = 0, j = 0;
        std::unordered_set<char> charSet;

        while (i < n && j < n) {
            if (charSet.find(s[j]) == charSet.end()) {
                charSet.insert(s[j]);
                j++;
                maxLength = std::max(maxLength, j - i);
            } else {
                charSet.erase(s[i]);
                i++;
            }
        }

        return maxLength;
    }
};


int main(){
    Solution s;
    

    return 0;
}


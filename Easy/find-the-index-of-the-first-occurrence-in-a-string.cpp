#include <iostream>
#include <algorithm>

using namespace std;

class Solution {
public:
    int strStr(string haystack, string needle) {
        
        auto it = search(haystack.begin(), haystack.end(), needle.begin(), needle.end());
        // Calculate the index of the subsequence
        size_t index = std::distance(haystack.begin(), it);
        if(it != haystack.end()){
            return index;
        }else{
            return -1;
        }
    }
};
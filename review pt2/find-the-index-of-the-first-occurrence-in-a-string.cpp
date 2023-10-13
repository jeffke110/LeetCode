#include <iostream>
#include <string>
#include <algorithm>
#include <iterator>

using namespace std;

class Solution {
public:
    int strStr(string haystack, string needle) {
        auto it = std::search(haystack.begin(), haystack.end(), needle.begin(), needle.end());
        if(it != haystack.end()){
            return std::distance(haystack.begin(), it);
        }else{
            return -1;
        }


    }
};
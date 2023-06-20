#include <iostream>
#include <algorithm>

using namespace std;

class Solution {
public:
    int strStr(string haystack, string needle) {
        
        auto it = search(haystack.begin(), haystack.end(), needle.begin(), needle.end());
        // Calculate the index of the subsequence
        std::cout << *it << std::endl;
        size_t index = std::distance(haystack.begin(), it);
        std::cout << index << std::endl;
        if(it != haystack.end()){
            return index;
        }else{
            return -1;
        }
    }
};


int main() {
    Solution solution;
    std::string haystack = "Hello, World!";
    std::string needle = "World";

    int index = solution.strStr(haystack, needle);
    std::cout << "The index of the needle \"" << needle << "\" in the haystack \"" << haystack << "\" is: " << index << std::endl;

    return 0;
}
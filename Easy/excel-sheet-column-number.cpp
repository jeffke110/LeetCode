#include <iostream>

using namespace std;



class Solution {
public:
    int titleToNumber(string columnTitle) {
        int result = 0;
        
        for (char c : columnTitle) {
            int digit = c - 'A' + 1; // Convert character to corresponding digit value
            result = result * 26 + digit; // Multiply previous result by 26 and add current digit
        }
        
        return result;
    }
};
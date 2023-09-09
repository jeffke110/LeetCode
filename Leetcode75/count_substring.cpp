#include <iostream>
#include <string>

class Solution
{
public:
    int gcdOfStrings(std::string str1, std::string str2)
    {
        size_t pos = str1.find(str2);
        int count = 0;
        while(pos != std::string::npos){
            count++;
            pos = str1.find(str2, pos + 1);
        }
        
        return count;
    }
};
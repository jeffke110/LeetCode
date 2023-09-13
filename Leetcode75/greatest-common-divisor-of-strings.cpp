#include <iostream>
#include <string>
#include <algorithm>


class Solution
{
public:
    std::string gcdOfStrings(std::string str1, std::string str2)
    {
        if (str1 + str2 != str2 + str1){
            return "";
        }
        int gcd = __gcd(str1.length(), str2.length());
        return str1.substr(0, gcd);
    }
};
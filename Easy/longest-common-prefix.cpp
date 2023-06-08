#include <iostream>
#include <vector>

using namespace std;

class Solution
{
public:
    /*
    Input: strs = ["flower","flow","flight"]
    Output: "fl"
    */
    string longestCommonPrefix(vector<string> &strs)
    {
        if (strs.empty())
        {
            return "";
        }

        //starts with the whole word and decrements each letter when there isn't a matching prefix.
        string prefix = strs[0];
        for (int i = 1; i < strs.size(); i++)
        {   
            while (strs[i].find(prefix) != 0)
            {
                //subtracts the last character of the prefix
                prefix = prefix.substr(0, prefix.length() - 1);

                if (prefix.empty())
                {
                    return "";
                }
            }
        }

        return prefix;
    }
}
;

int main()
{
    Solution s;
    std::vector<std::string> input{"flower", "flow", "flight"};
    std::cout << s.longestCommonPrefix(input) << std::endl;
}
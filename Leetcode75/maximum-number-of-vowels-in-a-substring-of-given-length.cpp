#include <iostream>
#include <string>
#include <unordered_set>

class Solution
{
public:
    int maxVowels(std::string s, int k)
    {
        int length = s.size();
        if (k > length)
        {
            return 0;
        }
        int currentVowelCount = 0;
        std::unordered_set<char> vowelSet = {'a', 'e', 'i', 'o', 'u'};
        for (int i = 0; i < k; i++)
        {
            if (vowelSet.find(s[i]) != vowelSet.end())
            {
                currentVowelCount++;
            }
        }
        int maxVowelCount = currentVowelCount;
        for (int i = k; i < length; i++)
        {
            if (vowelSet.find(s[i]) != vowelSet.end())
            {
                currentVowelCount++;
            }
            if (vowelSet.find(s[i - k]) != vowelSet.end())
            {
                currentVowelCount--;
            }
            maxVowelCount = std::max(maxVowelCount, currentVowelCount);
        }
        return maxVowelCount;
    }
};
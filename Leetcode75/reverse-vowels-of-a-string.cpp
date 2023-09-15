#include <iostream>
#include <string>
#include <unordered_set>

using namespace std;

class Solution
{
public:
    string reverseVowels(string s)
    {
       
        unordered_set<char> vowlSet{'a', 'e', 'i', 'o', 'u'};
        std::vector<char> vowels;
        for(int i = s.size() - 1; i >= 0; i--){
            if(vowlSet.contains(s[i])){
                vowels.push_back(s[i]);
            }
        }

        for(int i = 0; i < s.size(); i++){
            if(vowlSet.contains(s[i])){
                char replace = vowels.front();
                s[i] = replace;
                vowels.erase(vowels.begin());
            }
        }

        return s;

    }
};
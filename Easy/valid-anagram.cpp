#include <iostream>
#include <map>

using namespace std;

class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size() != t.size()){
            return false;
        }
        map<char, int> sMap;
        map<char,int> tMap;
        for(int i = 0; i < s.size(); i++){
            sMap[s[i]]++;
            tMap[t[i]]++;
        }
        for(int i = 0; i < s.size(); i++){
            if(tMap[s[i]] != sMap[s[i]] ){
                return false;
            }
        }
        return true;

    }
};
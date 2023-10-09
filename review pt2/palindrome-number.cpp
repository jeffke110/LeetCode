#include <iostream>
#include <string>

using namespace std;


class Solultion{

    bool isPalindrome(int x){
        std::string intString = std::to_string(x);
        int left = 0;
        int right = intString.size() - 1;
        bool isPali = true;
        while(left < right){
            if(intString[left] != intString[right]){
                return false;
            }
            left++;
            right--;
        }

        return true;
    }



};
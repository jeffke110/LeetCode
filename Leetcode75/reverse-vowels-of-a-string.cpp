#include <iostream>
#include <string>
#include <unordered_set>


class Solution {


public:
    std::string reverseVowels(std::string s){
        std::unordered_set<char> vowels = {'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I','O', 'U'};
        int left = 0;
        int right = s.length() - 1;
        while(left < right){
            while(left < right && vowels.find(s[left]) == vowels.end()){
                left++;
            }
            while(left < right && vowels.find(s[right]) == vowels.end()){
                right--;
            }
            if(left < right){
                std::swap(s[left], s[right]);
                left++;
                right--;
            }
        }
        return s;
    }
};

int main(){
    Solution solution;
    std::string input = "hello";
    std::string result = solution.reverseVowels(input);
    std::cout << "Reverse vowels: " << result << std::endl;


}
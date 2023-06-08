#include <iostream>
#include <unordered_map>


class Solution {
public:
/*
Symbol       Value
I             1
V             5
X             10
L             50
C             100
D             500
M             1000
*/
    int romanToInt(std::string inputString) {
        std::unordered_map<char, int> symbolValueMap{ {'I', 1}, {'V', 5}, {'X', 10}, {'L', 50}, {'C', 100}, {'D',500}, {'M', 1000} };
        int sum = 0;
        int size = inputString.size();
        for(int i = 0; i < size; i++){
            if(i < size - 1 && symbolValueMap[inputString[i]] < symbolValueMap[inputString[i + 1]]){
                sum -= symbolValueMap[inputString[i]];
            }else{
                sum += symbolValueMap[inputString[i]];
            }
        }
        return sum;
        
    }
};

int main(){
    Solution s;

    std::cout << s.romanToInt("VII") << std::endl;
    std::cout << s.romanToInt("MVII") << std::endl;

}

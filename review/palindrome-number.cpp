#include <iostream>


class Solution {

public:
    bool isPalindrome(int x){

        //convert to string
        if(x < 0){
            return false;

        }
        int original = x;
        int reverse  = 0;

        while(x > 0){
            int digit = x % 10;
            reverse = reverse * 10 + digit;
            x = x/10;
        }
        return original == reverse;
    }
};


int main(){

    int number;
    Solution solution;
    std::cout << "Enter a number";
    std::cin >> number;

    if(solution.isPalindrome(number)){
        std::cout<<"is Plaindrome";
    }else{
        std::cout<<"isn't Plaindrome";
    }
}

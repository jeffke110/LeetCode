#include <iostream>
//https://leetcode.com/problems/sum-of-two-integers/
int getSum(int a, int b) {
    while (b != 0) {
        int carry = (a & b) << 1;
        a = a ^ b;
        b = carry;
    }
    return a;
}

int main() {
    int num1, num2;
    std::cout << "Enter two integers: ";
    std::cin >> num1 >> num2;
    
    int sum = getSum(num1, num2);
    
    std::cout << "The sum is: " << sum << std::endl;
    
    return 0;
}
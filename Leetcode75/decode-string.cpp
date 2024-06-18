#include <iostream>
#include <stack>
#include <string>

std::string decodeString(const std::string &s) {
    std::stack<int> numStack;
    std::stack<std::string> strStack;
    std::string currentString;
    int currentNum = 0;

    for (char ch : s) {
        if (isdigit(ch)) {
            currentNum = currentNum * 10 + (ch - '0');
        } else if (ch == '[') {
            numStack.push(currentNum);
            strStack.push(currentString);
            currentNum = 0;
            currentString.clear();
        } else if (ch == ']') {
            int repeatTimes = numStack.top();
            numStack.pop();
            std::string temp = currentString;
            currentString = strStack.top();
            strStack.pop();
            while (repeatTimes-- > 0) {
                currentString += temp;
            }
        } else {
            currentString += ch;
        }
    }

    return currentString;
}

int main() {
    std::string s = "3[a]2[bc]";
    std::cout << decodeString(s) << std::endl;  // Output: "aaabcbc"

    s = "3[a2[c]]";
    std::cout << decodeString(s) << std::endl;  // Output: "accaccacc"

    s = "2[abc]3[cd]ef";
    std::cout << decodeString(s) << std::endl;  // Output: "abcabccdcdcdef"

    return 0;
}

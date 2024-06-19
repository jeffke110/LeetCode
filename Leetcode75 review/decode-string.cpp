#include <iostream>
#include <stack>
#include <string>

std::string decodeString(const std::string &s) {
    std::stack<int> numStack;
    std::stack<std::string> stringStack;
    std::string currString;
    int currentInt = 0;

    for(char c : s){
        if(isdigit(c)){
            currentInt = currentInt * 10 + (c - '0');
        }else if(c == '['){
            //push on to stack of multiplier and outer substrings
            numStack.push(currentInt);
            stringStack.push(currString);
            currentInt = 0;
            currString.clear();
        }else if(c == ']'){
            //pull off of stack 
            std::string temp = currString;
            currString = stringStack.top();
            for(int i = 0; i < numStack.top(); i++){
                currString.insert(currString.end(), temp.begin(), temp.end());
            }
            stringStack.pop();
            numStack.pop();
        }else{
            currString.insert(currString.end(), c);
        }

    }

    return currString;

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

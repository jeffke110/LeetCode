#include <iostream>
#include <string>
#include <stack>
/*
result = topChar + result (memory leak)
The memory leak in your removeStars function is due to how you are building the result string. 
In C++, strings are not like primitive types (such as int or char) where you can simply concatenate them using the + operator. 
Each time you use result = topChar + result;, you are actually creating a new string object by concatenating 
topChar with result and assigning it back to result. This involves dynamically allocating memory for the new string and deallocating the memory of the old result string.
*/

class Solution {
public:
    std::string removeStars(std::string s) {
        std::stack<char> stringStack;
        std::string result;
        for(char c : s){
            stringStack.push(c);
        }
        int deleteChar = 0;
        while(!stringStack.empty()){
            char topChar = stringStack.top();
            if(topChar != '*' && deleteChar == 0){
                result.insert(result.begin(), topChar);
                stringStack.pop();
            }else if(topChar != '*' && deleteChar > 0) {
                stringStack.pop();
                deleteChar--;
            }else if(topChar == '*'){
                stringStack.pop();
                deleteChar++;
            }
        }
        return result;
        
    }
};

/*
#include <stack>
#include <string>

std::string removeStars(std::string s) {
    std::stack<char> stringStack;
    
    for (char c : s) {
        if (c == '*') {
            // Check if there's a preceding character to remove
            if (!stringStack.empty()) {
                stringStack.pop(); // Remove the preceding character
            }
        } else {
            stringStack.push(c); // Push the current character onto the stack
        }
    }
    
    // Build the result string from the stack
    std::string result;
    while (!stringStack.empty()) {
        result = stringStack.top() + result; // Append characters in reverse order
        stringStack.pop();
    }
    
    return result;
}


*/
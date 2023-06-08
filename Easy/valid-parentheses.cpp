#include <iostream>
#include <unordered_map>
#include <stack>

class Solution
{

public:
    bool isValid(std::string s)
    {
        std::stack<char> parenthesesStack;
        std::unordered_map<char, char> closingToOpening{
            {')', '('},
            {'}', '{'},
            {']', '['}};

        for (char c : s)
        {
            if (closingToOpening.count(c))
            {
                if (parenthesesStack.empty() || parenthesesStack.top() != closingToOpening[c])
                {
                    return false;
                }
                parenthesesStack.pop();
            }
            else
            {
                parenthesesStack.push(c);
            }
        }
        return parenthesesStack.empty();
    }
};

int main()
{

    Solution s;

    std::cout << s.isValid("()") << std::endl;
}
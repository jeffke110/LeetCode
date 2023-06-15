#include <iostream>
#include <algorithm>
using namespace std;

template <typename T>
bool isNotAlphanumeric(T ch)
{
    return !std::isalnum(ch);
}

class Solution
{
public:
    bool isPalindrome(string input)
    {

        // covert to lowercase
        transform(input.begin(), input.end(), input.begin(), ::tolower);
        // remove spaces and non-alphanumeric characters
        cout << input << endl;
        auto it = remove_if(input.begin(), input.end(), isNotAlphanumeric<char>);
        input.erase(it, input.end());

        string reversed = input;
        reverse(reversed.begin(), reversed.end());

        cout << reversed << endl;

        if (reversed == input)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};
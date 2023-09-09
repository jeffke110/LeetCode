#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Solution {
public:
    vector<string> letterCombinations(string digits) {
        if (digits.empty()) {
            return {};
        }
        
        vector<string> result;
        string current;
        backtrack(result, current, digits, 0); // Start backtracking from the first digit (index 0)
        return result;
    }
    
    void backtrack(vector<string>& result, string& current, const string& digits, int index) {
        if (index == digits.size()) {
            result.push_back(current); // If we've processed all digits, add the current combination to the result
            return;
        }
        
        string letters = getLetters(digits[index]); // Get the letters corresponding to the current digit
        for (char letter : letters) {
            current.push_back(letter); // Add the current letter to the combination
            backtrack(result, current, digits, index + 1); // Recursively move to the next digit
            current.pop_back(); // Backtrack by removing the last letter to explore other possibilities
        }
    }
    
    string getLetters(char digit) {
        switch (digit) {
            case '2':
                return "abc";
            case '3':
                return "def";
            case '4':
                return "ghi";
            case '5':
                return "jkl";
            case '6':
                return "mno";
            case '7':
                return "pqrs";
            case '8':
                return "tuv";
            case '9':
                return "wxyz";
            default:
                return "";
        }
    }
};

int main() {
    Solution solution;
    string digits = "23"; // Example input
    vector<string> combinations = solution.letterCombinations(digits); // Find letter combinations

    for (const string& combination : combinations) {
        cout << combination << " "; // Print the resulting combinations
    }

    return 0;
}

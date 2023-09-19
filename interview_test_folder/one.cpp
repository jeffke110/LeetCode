#include <iostream>
#include <string>

// Function to combine adjacent digits in a string
std::string combineDigits(std::string &input) {
    std::string result = ""; // Start with an empty result string

    // Go through each digit in the input
    for (char digit : input) {
        // If we can combine the current digit with the previous one
        if (!result.empty() && digit + result.back() - '0' <= '9') {
            // Combine the digits by adding them together
            digit = digit + result.back() - '0';
            result.pop_back(); // Remove the previous digit from the result
        }

        // Add the current digit to the result
        result += digit;
    }

    // Return the final combined string
    return result;
}

int main() {
    std::string input1 = "32581";
    std::string result1 = combineDigits(input1);
    std::cout << "Combined result for input1: " << result1 << std::endl; // Output: "559"

    std::string input2 = "1119812";
    std::string result2 = combineDigits(input2);
    std::cout << "Combined result for input2: " << result2 << std::endl; // Output: "3992"

    std::string input3 = "226228";
    std::string result3 = combineDigits(input3);
    std::cout << "Combined result for input3: " << result3 << std::endl; // Output: "4828"

    return 0;
}

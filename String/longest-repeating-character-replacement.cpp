#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// Function to find the length of the longest repeating character replacement
int characterReplacement(string s, int k) {
    int maxCount = 0; // Track the maximum count of a single character in the current window
    int maxLength = 0; // Track the maximum length of the window seen so far
    int start = 0; // Start index of the window
    vector<int> charCount(26, 0); // Array to store the count of each character in the window

    // Iterate through the string using a sliding window approach
    for (int end = 0; end < s.length(); end++) {
        charCount[s[end] - 'A']++; // Increment the count of the current character
        maxCount = max(maxCount, charCount[s[end] - 'A']); // Update the maximum count of a character

        // If the number of characters to be replaced (window size - maxCount) exceeds k,
        // shrink the window from the start by incrementing start and decrementing the count of the character at that position
        if (end - start + 1 - maxCount > k) {
            charCount[s[start] - 'A']--; // Decrement the count of the character at the start of the window
            start++; // Move the start index to the right
        } else {
            maxLength = max(maxLength, end - start + 1); // Update the maximum length of the window seen so far
        }
    }

    return maxLength; // Return the maximum length of the window with repeated characters
}

int main() {
    string s = "AABABBA"; // Input string
    int k = 1; // Maximum number of character replacements allowed
    int length = characterReplacement(s, k); // Call the function to find the length

    // Print the result
    cout << "Length of the longest repeating character replacement: " << length << endl;

    return 0;
}

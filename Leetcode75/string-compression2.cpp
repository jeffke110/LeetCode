#include <iostream>
#include <vector>
#include <string>

int compress(std::vector<char>& chars) {
    int n = chars.size();
    if (n == 0) return 0;

    int write = 0;  // position to write the compressed character
    int read = 0;   // position to read the original character

    while (read < n) {
        char currentChar = chars[read];
        int count = 0;

        // Count occurrences of the current character
        while (read < n && chars[read] == currentChar) {
            read++;
            count++;
        }

        // Write the character to the compressed array
        chars[write++] = currentChar;

        // Write the count if it's more than 1
        if (count > 1) {
            for (char c : std::to_string(count)) {
                chars[write++] = c;
            }
        }
    }

    return write;
}

int main() {
    std::vector<char> chars = {'a', 'a', 'b', 'b', 'c', 'c', 'c'};
    int newLength = compress(chars);

    // Print the compressed string
    for (int i = 0; i < newLength; i++) {
        std::cout << chars[i];
    }
    std::cout << std::endl;

    return 0;
}

#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int characterReplacement(string s, int k) {
    int n = s.size();
    int maxLength = 0;
    int maxCount = 0;
    int start = 0;

    vector<int> charCount(26, 0);

    for (int end = 0; end < n; end++) {
        charCount[s[end] - 'A']++;
        maxCount = max(maxCount, charCount[s[end] - 'A']);

        // Calculate the number of replacements needed
        int replacements = end - start + 1 - maxCount;

        // If the number of replacements exceeds 'k', move the window
        if (replacements > k) {
            charCount[s[start] - 'A']--;
            start++;
        }

        maxLength = max(maxLength, end - start + 1);
    }

    return maxLength;
}
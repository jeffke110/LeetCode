#include <iostream>
#include <vector>
#include <algorithm>

int hIndex(std::vector<int>& citations) {
    std::sort(citations.begin(), citations.end(), std::greater<int>());

    int hIndex = 0;
    for (int i = 0; i < citations.size(); ++i) {
        if (citations[i] >= i + 1) {
            hIndex = i + 1;
        } else {
            break;
        }
    }

    return hIndex;
}

int main() {
    std::vector<int> citations = {3, 0, 6, 1, 5};
    std::cout << "H-Index: " << hIndex(citations) << std::endl;  // Output: 3
    return 0;
}

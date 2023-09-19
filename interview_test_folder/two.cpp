#include <iostream>
using namespace std;

string solution(string &message, int K) {
    if (K <= 3) {
        return "...";
    }

    if (message.length() <= K) {
        return message;
    }

    int spaceIndex = K - 4; // Adjust for the "..." and allow one character before it
    
    // Find the last space within the character limit
    while (spaceIndex >= 0 && message[spaceIndex] != ' ') {
        spaceIndex--;
    }

    // If no space is found within the character limit, just return "..."
    if (spaceIndex < 0) {
        return "...";
    }

    // Truncate the message at the last space and add "..."
    string notification = message.substr(0, spaceIndex) + "...";

    return notification;
}

int main() {
    string message1 = "And now here is my secret";
    int K1 = 15;
    cout << "Result for message1: " << solution(message1, K1) << endl; // Should return "And now ..."

    string message2 = "There is an animal with four legs";
    int K2 = 15;
    cout << "Result for message2: " << solution(message2, K2) << endl; // Should return "There is an ..."

    string message3 = "super dog";
    int K3 = 4;
    cout << "Result for message3: " << solution(message3, K3) << endl; // Should return "..."

    string message4 = "how are you";
    int K4 = 20;
    cout << "Result for message4: " << solution(message4, K4) << endl; // Should return "how are you"

    return 0;
}

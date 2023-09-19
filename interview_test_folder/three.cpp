#include <iostream>
#include <sstream>
#include <stack>
#include <limits> // Add this line
int solution(std::string& S) {
    std::istringstream iss(S);
    std::stack<int> stack;

    while (iss.good()) {
        std::string operation;
        iss >> operation;

        if (operation == "") {
            break;
        } else if (operation == "POP") {
            if (stack.empty()) return -1;
            stack.pop();
        } else if (operation == "DUP") {
            if (stack.empty()) return -1;
            stack.push(stack.top());
        } else if (operation == "+") {
            if (stack.size() < 2) return -1;
            int a = stack.top(); stack.pop();
            int b = stack.top(); stack.pop();
            int sum = a + b;
            if (sum < 0 || sum >= (1 << 20)) return -1;
            stack.push(a + b);
        } else if (operation == "-") {
            if (stack.size() < 2) return -1;
            int a = stack.top(); stack.pop();
            int b = stack.top(); stack.pop();
            if (a < b) return -1;
            stack.push(a - b);
        } else {
            int num = std::stoi(operation);
            stack.push(num);
        }
    }

    if (stack.empty()) return -1;

    return stack.top();
}

int main() {
    std::string S1 = "4 5 6 - 7 +";
    std::string S2 = "13 DUP 4 POP 5 DUP + DUP + -";
    std::string S3 = "5 6 + -";
    std::string S4 = "3 DUP 5 - -";
    std::string S5 = "1048575 DUP +";

    std::cout << solution(S1) << std::endl; // Output: 8
    std::cout << solution(S2) << std::endl; // Output: 7
    std::cout << solution(S3) << std::endl; // Output: -1
    std::cout << solution(S4) << std::endl; // Output: -1
    std::cout << solution(S5) << std::endl; // Output: -1

    return 0;
}

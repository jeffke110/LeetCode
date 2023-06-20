#include <iostream>
#include <vector>

using namespace std;

vector<int> plusOne(vector<int>& digits) {
    int n = digits.size();
    int carry = 1; // Initialize carry as 1 since we need to add 1 to the number

    for (int i = n - 1; i >= 0; i--) {
        int sum = digits[i] + carry;
        digits[i] = sum % 10; // Update the current digit
        carry = sum / 10; // Update the carry

        // If carry becomes 0, we can stop iterating since there won't be any more changes
        if (carry == 0) {
            break;
        }
    }

    // If carry is still non-zero, it means we need to add an additional digit at the beginning
    if (carry != 0) {
        digits.insert(digits.begin(), carry);
    }

    return digits;
}

int main() {
    // Example usage
    vector<int> digits = {1, 2, 3};
    vector<int> result = plusOne(digits);

    // Print the result
    for (int num : result) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}

/*
    vector<int> plusOne(vector<int>& digits) {
    int size = digits.size();
    for(int i = size - 1; i >= 0; i--){

        if(digits[i] == 9 && i == 0){
            digits[i] = 0;
            digits.insert(digits.begin(), 1);
        }else if(digits[i] == 9){
            digits[i] = 0;
        }else{
            digits[i]++;
            break;
        }
    }
    return digits;
    }


*/
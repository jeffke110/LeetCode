#include <iostream>
#include <stack>
#include <vector>
using namespace std;

class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
          int rows = matrix.size();
    if (rows == 0) return;

    int cols = matrix[0].size();

    bool firstRowHasZero = false;
    bool firstColHasZero = false;

    // Check if the first row has any zeros
    for (int j = 0; j < cols; ++j) {
        if (matrix[0][j] == 0) {
            firstRowHasZero = true;
            break;
        }
    }

    // Check if the first column has any zeros
    for (int i = 0; i < rows; ++i) {
        if (matrix[i][0] == 0) {
            firstColHasZero = true;
            break;
        }
    }

    // Use the first row and first column as markers to store information
    for (int i = 1; i < rows; ++i) {
        for (int j = 1; j < cols; ++j) {
            if (matrix[i][j] == 0) {
                matrix[i][0] = 0; // Mark the first element in this row
                matrix[0][j] = 0; // Mark the first element in this column
            }
        }
    }

    // Set rows and columns to zero based on markers in the first row and first column
    for (int i = 1; i < rows; ++i) {
        for (int j = 1; j < cols; ++j) {
            if (matrix[i][0] == 0 || matrix[0][j] == 0) {
                matrix[i][j] = 0;
            }
        }
    }

    // Set the first row to zero if needed
    if (firstRowHasZero) {
        for (int j = 0; j < cols; ++j) {
            matrix[0][j] = 0;
        }
    }

    // Set the first column to zero if needed
    if (firstColHasZero) {
        for (int i = 0; i < rows; ++i) {
            matrix[i][0] = 0;
        }
    }
    }
};
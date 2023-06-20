#include <iostream>
#include <vector>

std::vector<std::vector<int>> generatePascalTriangle(int numRows) {
    std::vector<std::vector<int>> triangle(numRows);

    for (int i = 0; i < numRows; i++) {
        triangle[i].resize(i + 1);
        triangle[i][0] = 1;
        triangle[i][i] = 1;

        for (int j = 1; j < i; j++) {
            triangle[i][j] = triangle[i - 1][j - 1] + triangle[i - 1][j];
        }
    }

    return triangle;
}

void printPascalTriangle(const std::vector<std::vector<int>>& triangle) {
    for (const auto& row : triangle) {
        for (const auto& num : row) {
            std::cout << num << " ";
        }
        std::cout << std::endl;
    }
}

int main() {
    int numRows = 5;
    std::vector<std::vector<int>> pascalTriangle = generatePascalTriangle(numRows);

    printPascalTriangle(pascalTriangle);

    return 0;
}

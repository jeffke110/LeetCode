#include <iostream>
#include <stack>
#include <vector>
using namespace std;

class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {

        for(int i = 0; i < matrix.size(); i++){
            for(int j = i; j <matrix[0].size(); j++){
                std::swap(matrix[i][j], matrix[j][i]);
            }
        }
        for(int i = 0; i < matrix.size(); i++){
            std::reverse(matrix[i].begin(), matrix[i].end());
        }
     
    }
};
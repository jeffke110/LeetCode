#include <iostream>
#include <stack>
#include <vector>
using namespace std;
class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> output;
        if(matrix.size() == 0 || matrix[0].size() == 0){
            return output;
        }

        int rows = matrix.size();
        int columns = matrix[0].size();
        int left = 0;
        int right = matrix[0].size() - 1;
        int top = 0;
        int bottom = matrix.size() - 1;

        while(top <= bottom && left <= right){
            
            //top: right to left
            for(int i = left; i <= right; i++){
                output.push_back(matrix[top][i]);
            }
            top++;
            //right: top to bottom
            for(int i = top; i <= bottom; i++){
                output.push_back(matrix[i][right]);
            }
            right--;

            //bottom: left to right
            if(top<= bottom ){
                for(int i = right; i >= left; i--){
                    output.push_back(matrix[bottom][i]);
                }
                bottom--;
            }
            //left: bottom to top
            if(left <= right){
                for(int i = bottom; i >= top; i--){
                    output.push_back(matrix[i][left]);
                }
                left++;
            }
        }
        return output;
    }
};
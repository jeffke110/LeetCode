
#include <iostream>
#include <stack>
#include <vector>
using namespace std;
class Solution {
public:

    bool searchWord(vector<vector<char>>& board, string word, int row , int col, int index){
        if(index == word.length())
            return true;
        
        int rows = board.size();
        int columns = board[0].size();

        //checking bounds
        if(row < 0 || row >= rows  || col < 0 || col >= columns || board[row][col] != word[index]){
            return false;
        }

        char temp = board[row][col];
        board[row][col] = '#';

        bool found = searchWord(board, word, row, col - 1, index + 1) || //check left
                        searchWord(board, word, row, col + 1, index + 1)  || //check right
                        searchWord(board, word, row - 1, col, index + 1) || //check top
                        searchWord(board, word, row + 1, col, index + 1); //check bottom

        board[row][col] = temp;
        return found;

    }

    bool exist(vector<vector<char>>& board, string word) {
        
        for(int i = 0; i < board.size(); i++){
            for(int j = 0; j < board[0].size(); j++){
                //if the first letter is found
                // start search
                if(board[i][j] == word[0]){
                   if(searchWord(board, word, i, j, 0)){
                       return true;
                   }
                }
            }
        }
        return false;

    }
};
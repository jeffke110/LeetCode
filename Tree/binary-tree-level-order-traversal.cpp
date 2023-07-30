#include <iostream>
#include <stack>
#include <vector>
using namespace std;
// Definition for a binary tree node.
struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};

class Solution {
public:
    void levelRec(TreeNode * input, vector<vector<int>> & vec, int levelCount){
        if(levelCount > vec.size()){
            vec.push_back({});
        }
        if(input->left != nullptr){
            vec[levelCount - 1].push_back(input->left->val);
            levelRec(input->left, vec, levelCount + 1);
        }

        if(input->right != nullptr){
            vec[levelCount - 1].push_back(input->right->val);
            levelRec(input->right, vec, levelCount + 1);
        }

    }
    vector<vector<int>> levelOrder(TreeNode* root) {

        vector<vector<int>> output;
        if(root == nullptr){
            return output;
        }
        if(root->left == nullptr && root->right == nullptr){
            return {{root->val}};
        }
        output.push_back({root->val});
        levelRec(root, output, 2);
        output.pop_back();
        return output;
    }
};
#include <iostream>
#include <stack>

// Definition for a binary tree node.
struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};

class Solution {
public:

    TreeNode* invertTree(TreeNode* root) {
        
        if(root == nullptr){
            return nullptr;
        }
        if(root->right == nullptr && root->left == nullptr){
            return root;
        }

        TreeNode * tempLeft = root->left;
        root->left = root->right;
        root->right = tempLeft;

        invertTree(root->right);
        invertTree(root->left);

        return root;

    }
};
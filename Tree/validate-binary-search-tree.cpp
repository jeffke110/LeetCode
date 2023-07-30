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
    bool isValidRe(TreeNode* node, TreeNode *minNode, TreeNode*maxNode){
         if(node == nullptr){
            return true;
        }        

        if(minNode && minNode->val >= node->val){
            return false;
        }
        if(maxNode && node->val >= maxNode->val ){
            return false;
        }
        
        return isValidRe(node->left, minNode, node) && isValidRe(node->right, node, maxNode);

    }

    bool isValidBST(TreeNode* root) {
        
      return isValidRe(root, nullptr, nullptr);

    }
};
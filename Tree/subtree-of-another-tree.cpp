#include <iostream>

struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};

class Solution {
public:

    bool isSameTree(TreeNode* root, TreeNode* subRoot){
        if(root == nullptr && subRoot == nullptr){
            return true;
        }
        if(root == nullptr || subRoot == nullptr){
            return false;
        }

        return (root->val == subRoot->val) && isSameTree(root->right, subRoot->right) &&
                                isSameTree(root->left, subRoot->left); 

    }
    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        if(root == nullptr || subRoot == nullptr){
            return false;
        }
        if(isSameTree(root, subRoot)){
            return true;
        }

        return isSubtree(root->left, subRoot) || isSubtree(root->right, subRoot);
    }


};
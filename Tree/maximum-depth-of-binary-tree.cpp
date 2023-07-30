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

    int reMaxDepth(TreeNode* root, int count){
        if(root->right == nullptr && root->left == nullptr){
            count++;
            return count;
        }
        if(root->left != nullptr || root->right != nullptr){
             count++;
        }
        int left = 0;
        int right = 0;
        if(root->left != nullptr){
            left =  reMaxDepth(root->left, count);
        }
        if(root->right != nullptr){
            right =  reMaxDepth(root->right, count);
        }
        if(right > left){
            return right;
        }else{
            return left;
        }
    }

    int maxDepth(TreeNode* root) {
        if(root == nullptr){
            return 0;
        }
        if(root->right == nullptr && root->left == nullptr){
            return 1;
        }
        int left = 0;
        int right = 0;
        if(root->left != nullptr){
            left = reMaxDepth(root->left, 1);
        }
        if(root->right != nullptr){
            right = reMaxDepth(root->right, 1);
        }
        if(right > left){
            return right;
        }else{
            return left;
        }
    }
};
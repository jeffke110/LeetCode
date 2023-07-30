#include <iostream>

// Definition for a binary tree node.
struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};

class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        // Check if the root is null or if either p or q is the root.
        if (root == nullptr || root == p || root == q)
            return root;

        // Search in the left and right subtrees for p and q.
        TreeNode* leftLCA = lowestCommonAncestor(root->left, p, q);
        TreeNode* rightLCA = lowestCommonAncestor(root->right, p, q);

        // If both p and q are found in different subtrees, the current node is the LCA.
        if (leftLCA && rightLCA)
            return root;

        // If both p and q are found in the same subtree, pass the result upward.
        return leftLCA ? leftLCA : rightLCA;
    }
};

int main() {
    // Example usage:
    Solution sol;

    // Create the BST:
    TreeNode* root = new TreeNode(6);
    root->left = new TreeNode(2);
    root->right = new TreeNode(8);
    root->left->left = new TreeNode(0);
    root->left->right = new TreeNode(4);
    root->right->left = new TreeNode(7);
    root->right->right = new TreeNode(9);
    root->left->right->left = new TreeNode(3);
    root->left->right->right = new TreeNode(5);

    TreeNode* p = root->left; // Node with value 2
    TreeNode* q = root->left->right->right; // Node with value 5

    TreeNode* lca = sol.lowestCommonAncestor(root, p, q);
    std::cout << "The Lowest Common Ancestor of nodes " << p->val << " and " << q->val << " is: " << lca->val << std::endl;

    // Clean up the memory (optional, but recommended)
    delete root->left->right->right;
    delete root->left->right->left;
    delete root->left->right;
    delete root->left->left;
    delete root->left;
    delete root->right->right;
    delete root->right->left;
    delete root->right;
    delete root;

    return 0;
}

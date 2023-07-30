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
    int kthSmallest(TreeNode* root, int k) {
        std::stack<TreeNode*> st;
        TreeNode* curr = root;

        while (curr != nullptr || !st.empty()) {
            while (curr != nullptr) {
                st.push(curr);
                curr = curr->left;
            }

            curr = st.top();
            st.pop();

            k--;
            if (k == 0) {
                return curr->val;
            }

            curr = curr->right;
        }

        return -1; // Dummy return if k is not valid (tree has less than k nodes).
    }
};

int main() {
    // Example usage:
    Solution sol;

    // Create the BST:
    TreeNode* root = new TreeNode(5);
    root->left = new TreeNode(3);
    root->right = new TreeNode(6);
    root->left->left = new TreeNode(2);
    root->left->right = new TreeNode(4);
    root->left->left->left = new TreeNode(1);

    int k = 3;
    int kthSmallestElement = sol.kthSmallest(root, k);
    std::cout << "The " << k << "th smallest element in the BST is: " << kthSmallestElement << std::endl;

    // Clean up the memory (optional, but recommended)
    delete root->left->left->left;
    delete root->left->left;
    delete root->left->right;
    delete root->left;
    delete root->right;
    delete root;

    return 0;
}

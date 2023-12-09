/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<int> inorderTraversal(TreeNode* root) {
        if (!root) return {};
        vector<int> output;
        vector<int> traversal = inorderTraversal(root->left);
        for (int i = 0; i < traversal.size(); i++) {
            output.push_back(traversal[i]);
        }
        output.push_back(root->val);
        traversal = inorderTraversal(root->right);
        for (int i = 0; i < traversal.size(); i++) {
            output.push_back(traversal[i]);
        }
        return output;
    }
};
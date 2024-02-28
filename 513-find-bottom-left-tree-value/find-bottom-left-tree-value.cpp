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
    int findBottomLeftValue(TreeNode* root) {
        queue<TreeNode*> nodes;
        nodes.push(root);
        while (!nodes.empty()) {
            TreeNode* currNode = nodes.front();
            nodes.pop();
            if (currNode->right) nodes.push(currNode->right);
            if (currNode->left) nodes.push(currNode->left);
            if (nodes.empty()) {
                return currNode->val;
            }
        }
        return -1;
    }
};
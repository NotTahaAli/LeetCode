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
        queue<TreeNode*> nextLevel;
        int LeftMost;
        nodes.push(root);
        bool first = true;
        while (!nodes.empty()) {
            TreeNode* currNode = nodes.front();
            if (first) {
                LeftMost = currNode->val;
                first = false;
            }
            nodes.pop();
            if (currNode->left) nextLevel.push(currNode->left);
            if (currNode->right) nextLevel.push(currNode->right);
            if (nodes.empty()) {
                nodes = nextLevel;
                nextLevel = {};
                first = true;
            }
        }
        return LeftMost;
    }
};
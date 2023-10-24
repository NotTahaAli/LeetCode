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
    vector<int> rows;

    void iterate(TreeNode* root, int row) {
        if (root) {
            while (rows.size() < row + 1) rows.push_back(INT_MIN);
            if (rows[row] < root->val) {
                rows[row] = root->val;
            }
            iterate(root->right, row+1);
            iterate(root->left, row+1);
        }
    }

    vector<int> largestValues(TreeNode* root) {
        iterate(root, 0);
        return rows;
    }
};
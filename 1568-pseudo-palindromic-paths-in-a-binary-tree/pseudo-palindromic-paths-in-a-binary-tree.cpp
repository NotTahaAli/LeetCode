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
    int palindromic(TreeNode* root, vector<bool> search = {0,0,0,0,0,0,0,0,0}) {
        search[root->val - 1] = !search[root->val - 1];
        if (!root->right && !root->left) {
            bool unmatched = false;
            for (int i = 0; i < 9; i++) {
                if (search[i]) {
                    if (unmatched) return 0;
                    unmatched = true;
                }
            }
            return 1;
        }
        int count = 0;
        if (root->right) {
            count += palindromic(root->right, search);
        }
        if (root->left) {
            count += palindromic(root->left, search);
        }
        return count;
    }
    int pseudoPalindromicPaths (TreeNode* root) {
        return palindromic(root);
    }
};
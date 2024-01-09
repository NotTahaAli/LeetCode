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
    vector<int> leafSequence(TreeNode* root) {
        if (root == nullptr) return {};
        if (root->left == nullptr && root->right == nullptr) {
            return {root->val};
        }
        vector<int> left = leafSequence(root->left);
        vector<int> right = leafSequence(root->right);
        left.insert(end(left), begin(right), end(right));
        return left;
    }
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        vector<int> ls1 = leafSequence(root1);
        vector<int> ls2 = leafSequence(root2);
        if (ls1.size() != ls2.size()) return false;
        for (int i = 0; i < ls1.size(); i++) {
            if (ls1[i] != ls2[i]) return false;
        }
        return true;
    }
};
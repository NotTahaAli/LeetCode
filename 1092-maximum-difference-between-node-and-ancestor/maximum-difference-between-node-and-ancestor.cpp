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
    void decendantSearch(TreeNode* root, int &minV, int &maxV, int &maxDiff) {
        if (root == nullptr) return;
        int localmin = root->val, localmax = root->val;
        decendantSearch(root->left, localmin, localmax, maxDiff);
        decendantSearch(root->right, localmin, localmax, maxDiff);
        minV = min(minV, localmin);
        maxV = max(maxV, localmax);
        cout << localmin << " " << localmax << " " << root->val << endl;
        int localDiff = max(abs(root->val - localmin), abs(root->val - localmax));
        maxDiff = max(maxDiff, localDiff);
    }

    int maxDecendantDiff(TreeNode* root) {
        int minNum = INT_MAX, maxNum = INT_MIN, maxDiff = -1;
        decendantSearch(root, minNum, maxNum, maxDiff);
        return maxDiff;
    }

    int maxAncestorDiff(TreeNode* root) {
        return maxDecendantDiff(root);
    }
};
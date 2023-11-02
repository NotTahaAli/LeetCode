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

    int count = 0;

    int sumOfTree(TreeNode* root, int &values) {
        values++;
        int sum = root->val;
        if (root->right) sum+=sumOfTree(root->right, values);
        if (root->left) sum+=sumOfTree(root->left, values);
        return sum;
    }

    void checkSubtreeAverage(TreeNode* root) {
        int values = 0;
        int avg = sumOfTree(root, values);
        avg /= values;
        if (avg == root->val) count++;
        if (root->right) checkSubtreeAverage(root->right);
        if (root->left) checkSubtreeAverage(root->left);
    }

    int averageOfSubtree(TreeNode* root) {
        checkSubtreeAverage(root);
        return count;
    }
};
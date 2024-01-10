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

struct Node {
    bool infected = false;
    Node *prev = nullptr;
    Node *left = nullptr;
    Node *right = nullptr;
};

class Solution {
public:
    vector<Node*> infected;
    bool toContinue = false;
    vector<Node*> infect() {
        vector<Node*> newInfecteds = {};
        for (auto root: infected) {
            if (root->prev && !root->prev->infected) {
                root->prev->infected = true;
                newInfecteds.push_back(root->prev);
                toContinue = true;
            }
            if (root->left && !root->left->infected) {
                root->left->infected = true;
                newInfecteds.push_back(root->left);
                toContinue = true;
            }
            if (root->right && !root->right->infected) {
                root->right->infected = true;
                newInfecteds.push_back(root->right);
                toContinue = true;
            }
        }
        return newInfecteds;
    }
    bool createTree(TreeNode* root, Node* nodeRoot, int start) {
        bool allInfected = true;
        if (root->val == start) {
            nodeRoot->infected = true;
            infected.push_back(nodeRoot);
        }
        else allInfected = false;
        if (root->left) {
            nodeRoot->left = new Node;
            nodeRoot->left->prev = nodeRoot;
            if (!createTree(root->left, nodeRoot->left, start)) allInfected = false;
        }
        if (root->right) {
            nodeRoot->right = new Node;
            nodeRoot->right->prev = nodeRoot;
            if (!createTree(root->right, nodeRoot->right, start)) allInfected = false;
        }
        return allInfected;
    }
    int amountOfTime(TreeNode* root, int start) {
        Node* head = new Node;
        if(createTree(root, head, start));
        int turn = 1;
        toContinue = true;
        while (toContinue) {
            toContinue = false;
            infected = infect();
            turn++;
        };
        return turn-2;
    }
};
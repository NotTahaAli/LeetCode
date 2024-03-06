/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
private:
    set<ListNode*> visited;
public:
    bool hasCycle(ListNode *head) {
        ListNode* curr = head;
        while (curr) {
            if (!visited.count(curr)) {
                visited.insert(curr);
                curr = curr->next;
            } else {
                return true;
            }
        }
        return false;
    }
};
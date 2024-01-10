/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* mergeNodes(ListNode* head) {
        ListNode *curr = head;
        ListNode *newHead = nullptr;
        ListNode *newL = nullptr;
        int sum = 0;
        while (curr != nullptr) {
            if (curr->val == 0) {
                if (sum != 0) {
                    if (newL == nullptr) {
                        newL = new ListNode(sum);
                        newHead = newL;
                    } else {
                        newL->next = new ListNode(sum);
                        newL = newL->next;
                    }
                }
                sum = 0;
            } else {
                sum += curr->val;
            }
            curr = curr->next;
        }
        return newHead;
    }
};
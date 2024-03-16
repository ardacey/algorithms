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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* end = head;
        ListNode* curr = head;
        ListNode* prev = head;
        for (int i = 0; i < n; i++) {
            end = end->next;
        }
        if (end == NULL) {
            return head->next;
        }
        while (end != NULL) {
            end = end->next;
            prev = curr;
            curr = curr->next;
        }
        prev->next = curr->next;
        return head;
    }
};
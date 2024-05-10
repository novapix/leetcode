
// * Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode* next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode* next) : val(x), next(next) {}
};


class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* dummy = new ListNode(0); // Create a dummy node
        dummy->next = head;
        ListNode* prev = dummy;
        ListNode* curr = dummy->next;

        while (curr) {
            if (curr->next && curr->val == curr->next->val) {
                int value = curr->val;
                while (curr && curr->val == value) {
                    curr = curr->next;
                }
                prev->next = curr;
            } else {
                prev = curr;
                curr = curr->next;
            }
        }

        return dummy->next;
    }
};
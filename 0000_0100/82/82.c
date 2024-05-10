#include<stdlib.h>
//  * Definition for singly-linked list.
struct ListNode {
    int val;
    struct ListNode* next;
};

struct ListNode* deleteDuplicates(struct ListNode* head) {
    struct ListNode* dummy = (struct ListNode*)malloc(sizeof(struct ListNode));
    dummy->next = head;
    struct ListNode* prev, * curr;
    prev = dummy;
    curr = dummy->next;

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
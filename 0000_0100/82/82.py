# Definition for singly-linked list.

from typing import Optional


class ListNode:
    def __init__(self, val=0, next=None):
        self.val = val
        self.next = next


class Solution:
    def deleteDuplicates(self, head: Optional[ListNode]) -> Optional[ListNode]:
        dummy = ListNode()
        dummy.next = head
        prev = dummy
        current = dummy.next

        while current:
            if current.next and current.val == current.next.val:
                # dupe found skipppp allllll
                value = current.val
                while current and current.val == value:
                    current = current.next
                prev.next = current  # Link the last non dupe node to the next non dupe node

            else:
                prev = current
                current = current.next

        return dummy.next

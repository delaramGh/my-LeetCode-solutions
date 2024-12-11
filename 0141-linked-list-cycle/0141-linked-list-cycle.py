# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, x):
#         self.val = x
#         self.next = None

class Solution:
    def hasCycle(self, head: Optional[ListNode]) -> bool:
        if head == None or head.next == None:
            return False;
        memory = []
        temp = head
        while temp.next != None:
            memory.append(temp)
            temp = temp.next
            if temp in memory:
                return True
        return False
        
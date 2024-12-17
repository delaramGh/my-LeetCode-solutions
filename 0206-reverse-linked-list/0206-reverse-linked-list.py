# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def reverseList(self, head: Optional[ListNode]) -> Optional[ListNode]:
        if head == None:
            return None
        
        temp = head
        ans = []
        while 1:
            ans.append(temp.val)
            if temp.next == None:
                break
            temp = temp.next
            
        new_head = ListNode()
        temp = new_head
        for i in range(len(ans)): #0, 1, 2, 3, 4
            index = len(ans)-1-i
            print(index)
            temp.val = ans[index]            
            if i < len(ans)-1:
                temp.next = ListNode()
                temp = temp.next
            
        return new_head
            
            
            
        
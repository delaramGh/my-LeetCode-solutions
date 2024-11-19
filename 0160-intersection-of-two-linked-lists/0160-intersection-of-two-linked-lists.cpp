/**
 * Definition for singly-linked list.
 * struct ListNode 
 {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */

class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) 
    {
        ListNode* A = headA;
        ListNode* B = headB;
        while(A != NULL)
        {
            ListNode* B = headB;
            while(B != NULL)
            {
                // cout<<"a: "<<A->val<<" - "<<"b: "<<B->val<<endl;
                if(A == B)
                    return A;
                B = B->next;
            }
            A = A->next;
        }
        ListNode ans = ListNode(0);
        return ans.next;
    }
};
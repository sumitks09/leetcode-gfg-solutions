/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode *temp=headA;
            ListNode *temp2=headB;
            while(temp!=temp2)
            {
            if(temp==nullptr)
            {
                    temp=headB;
            }
            else
            {
                    temp=temp->next;
            }
            if(temp2==nullptr)
            {
                    temp2=headA;
                    
            }
            else
            {
                    temp2=temp2->next;
            }
            }
            return temp;
            
    }
};
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
        ListNode* start1=headA,*start2=headB;
        int count=0;
        
        while(start1!=start2 && count<2)
        {
            if(start1->next!=NULL)
                start1=start1->next;
            else
            {
                start1=headB;
                count++;
            }
            
            if(start2->next!=NULL)
                start2=start2->next;
            else
                start2=headA;
        }
        if(count==2)
            return NULL;
        return start1;
    }
};

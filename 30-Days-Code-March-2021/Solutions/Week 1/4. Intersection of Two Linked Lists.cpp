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
        
        ListNode *tmpA = headA, *tmpB = headB;
        int lenA=0, lenB=0, cnt=0;
        
        while(tmpA != nullptr) 
            ++lenA, tmpA = tmpA ->next;
        
        while(tmpB != nullptr) 
            ++lenB, tmpB = tmpB ->next;
        
        cnt = abs(lenA-lenB), tmpA = headA, tmpB = headB;
     
        if(lenA > lenB)
        {
            while(cnt--)
                tmpA = tmpA -> next;
        }
        
        else if(lenB > lenA)
        {
            while(cnt--)
                tmpB = tmpB -> next;
        }

        while(tmpA != nullptr)
        {
            if (tmpA == tmpB)
                return tmpA;
            
            tmpA = tmpA -> next, tmpB = tmpB -> next;
        }
        
        return nullptr;
    }
};

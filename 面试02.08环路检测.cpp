//
// Created by Administrator on 2020/6/19.
//

class Solution {
public:
    ListNode *detectCycle(ListNode *pHead) {
        ListNode *fast,*slow;
        fast=slow=pHead;
        while(fast&&fast->next){
            fast=fast->next->next;
            slow=slow->next;
            if(fast==slow){
                break;
            }
        }
        if(fast==NULL||fast->next==NULL) return NULL;

        while(fast!=pHead){
            fast=fast->next;
            pHead=pHead->next;

        }
        return pHead;
    }
};
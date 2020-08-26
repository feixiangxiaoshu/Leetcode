//
// Created by Administrator on 2020/6/19.
//

class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        if(l1==NULL) return l2;
        if(l2==NULL) return l1;
        ListNode* head=new ListNode(0);
        ListNode* p=head;
        head->next=l1;
        int sign=0;
        int sum=0;
        while(l1||l2||sign){
            sum=0;
            if(l1){
                sum+=(l1->val);
                l1=l1->next;
            }
            if(l2){
                sum+=(l2->val);
                l2=l2->next;
            }
            sum+=sign;
            ListNode* tmp=new ListNode(sum%10);
            sign=sum/10;
            p->next=tmp;
            p=p->next;
        }
        return head->next;

    }
};
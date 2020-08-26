class Solution {
public:
    ListNode* partition(ListNode* head, int x) {
        if(head==NULL) return NULL;
        ListNode *p1=new ListNode(0);
        p1->next=head;
        ListNode *phead=p1;
        ListNode *p2=new ListNode(0);
        ListNode *phead2=p2;
        while(p1->next!= nullptr){
            if(p1->next->val<x){
                p1=p1->next;
            }else{
                p2->next=p1->next;
                p2=p2->next;
                p1->next=p1->next->next;
            }
        }
        p2->next=NULL;
        p1->next=phead2->next;
        return phead->next;
    }
};//
// Created by Administrator on 2020/6/19.
//


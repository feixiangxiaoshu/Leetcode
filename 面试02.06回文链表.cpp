//
// Created by Administrator on 2020/6/18.
//

lass Solution {
        public:
        bool isPalindrome(ListNode* head) {
            if(head==NULL) return 1;
            ListNode* mid=findMid(head);
            ListNode* p2=reverse(mid->next);
            ListNode* p1=head;
            bool res=1;
            while(res==1&&p2){
                if(p1->val!=p2->val){
                    res=0;
                    break;
                }
                p1=p1->next;
                p2=p2->next;
            }
            return res;
        }

        ListNode* findMid(ListNode *head){
            ListNode* fast=head;
            ListNode* slow=head;
            while(fast->next!= nullptr&&fast->next->next!= nullptr){
                fast=fast->next->next;
                slow=slow->next;
            }
            return slow;
        }
        ListNode* reverse(ListNode* head){
            ListNode* cur=head;
            ListNode* pre=NULL;
            while(cur!=NULL){
                ListNode* tmp=cur->next;
                cur->next=pre;
                pre=cur;
                cur=tmp;
            }
            return pre;
        }
};
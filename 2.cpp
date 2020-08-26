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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int cf=0;
        ListNode* res=new ListNode(0);
        ListNode* p1=res;
        while(l1&&l2){
            ListNode *tmp=new ListNode(0);
            int count=0;
            if(cf==1){
                count=l1->val+l2->val+1;
            }else{
                count=l1->val+l2->val;
            }
            if(count>9){
                count=count-10;
                cf=1;
            }
            else{
                cf=0;
            }
            tmp->val=count;
            p1->next=tmp;

            p1=p1->next;
            l1=l1->next;
            l2=l2->next;

        }

        while(l1){
            ListNode*tmp=new ListNode(0);
            if(cf==1){
                tmp->val=l1->val+1;
            }else{
                tmp->val=l1->val;
            }
            if(tmp->val>9){
                cf=1;
                tmp->val=l1->val+1-10;
            }else{
                cf=0;
            }


            p1->next=tmp;
            p1=p1->next;
            l1=l1->next;
            }
        while(l2){
            ListNode*tmp=new ListNode(0);
            if(cf==1){
                tmp->val=l2->val+1;
            }else{
                tmp->val=l2->val;
            }
            if(tmp->val>9){

                tmp->val=l2->val+1-10;
                cf=1;
            }else{
                cf=0;
            }


            p1->next=tmp;
            p1=p1->next;
            l2=l2->next;
        }
        if(cf==1){
            ListNode* tmp=new ListNode(1);
            p1->next=tmp;
        }
        return res->next;
    }


};